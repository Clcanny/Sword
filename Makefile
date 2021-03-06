# 编译器设定和编译选项
# CC = gcc -fprofile-arcs -ftest-coverage
CC = gcc
FLEX = flex
BISON = bison
INC_DIR = $(shell find $(shell pwd) -maxdepth 1 -type d | sed -e 's/^/-I/')
CFLAGS = -std=c99 -ggdb $(INC_DIR) -fprofile-arcs -ftest-coverage
LDFLAGS = -fprofile-arcs -ftest-coverage

# 编译目标：src目录下的所有.c文件
CFILES = $(shell find ./ -name "*.c")
OBJS = $(CFILES:.c=.o)
LFILE = $(shell find ./ -maxdepth 1 -name "*.l")
YFILE = $(shell find ./ -maxdepth 1 -name "*.y")
LFC = $(shell find ./ -maxdepth 1 -name "*.l" | sed s/[^/]*\\.l/lex.yy.c/)
YFC = $(shell find ./ -maxdepth 1 -name "*.y" | sed s/[^/]*\\.y/syntax.tab.c/)
LFO = $(LFC:.c=.o)
YFO = $(YFC:.c=.o)

parser: clean syntax $(filter-out $(LFO),$(OBJS))
	$(CC) $(CFLAGS) -o parser $(filter-out $(LFO),$(OBJS)) $(LDFLAGS) -lfl -ly

syntax: lexical syntax-c
	$(CC) $(CFLAGS) -c $(YFC) -o $(YFO)

lexical: $(LFILE)
	$(FLEX) -o $(LFC) $(LFILE)

syntax-c: $(YFILE)
	$(BISON) -o $(YFC) -d -t -v $(YFILE)

-include $(patsubst %.o, %.d, $(OBJS))

# 定义的一些伪目标
.PHONY: coverageAbstract coverageDetail clean test

ACTIONFILES = $(shell find ./ -name "[1-9]*.c")
SUBDIRS = $(shell find ./ -maxdepth 1 -type d -name "Test*")
ALLSD = $(shell find ./ -maxdepth 1 -type d)

coverageAbstract:
	make
	for subdir in $(SUBDIRS); do \
	    (cd $$subdir && make runAbstract); \
	done;
	for file in $(ACTIONFILES); do \
	    gcov -f -n $$file >> coverage.output; \
	done;
	! grep -q :0.00% coverage.output

coverageDetail:
	grep -B 1 ":0.00%" coverage.output

debug:
	cp DebugMacroCopy.h DebugMacro.h
	make
	./parser test.cmm

clean:
	- @ for subdir in $(SUBDIRS); do \
	    	(cd $$subdir && make clean); \
	  done;
	- @ for subdir in $(ALLSD); do \
		(cd $$subdir && rm -f parser lex.yy.c syntax.tab.c syntax.tab.h syntax.output); \
		(cd $$subdir && rm -f *.gcno *.gcda *.output); \
		(cd $$subdir && rm -f $(OBJS) $(OBJS:.o=.d)); \
		(cd $$subdir && rm -f $(LFC) $(YFC) $(YFC:.c=.h)); \
	   done;

fuck:
	echo $(INC_DIR)
