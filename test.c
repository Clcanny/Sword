#define GetLast2(N, Code) Code
#define GetLast3(N, ...) GetLast2(__VA__ARGS__)
#define GetLast4(N, ...) GetLast3(__VA__ARGS__)
#define GetLast5(N, ...) GetLast4(__VA__ARGS__)
#define GetLast6(N, ...) GetLast5(__VA__ARGS__)
#define GetLast7(N, ...) GetLast6(__VA__ARGS__)
#define GetLast8(N, ...) GetLast7(__VA__ARGS__)

#define GetMacro( \
	_1, _2, _3, \
	_4, _5, _6, \
	_7, _8, _9, \
	...) _9

#define FE1(Action, Code, N, NoU) Action(Code, N)
#define FE2(Action, Code, N, ...) Action(Code, N) FE1(Action, Code, __VA__ARGS__)
#define FE3(Action, Code, N, ...) Action(Code, N) FE2(Action, Code, __VA__ARGS__)
#define FE4(Action, Code, N, ...) Action(Code, N) FE3(Action, Code, __VA__ARGS__)
#define FE5(Action, Code, N, ...) Action(Code, N) FE4(Action, Code, __VA__ARGS__)
#define FE6(Action, Code, N, ...) Action(Code, N) FE5(Action, Code, __VA__ARGS__)
#define FE7(Action, Code, N, ...) Action(Code, N) FE6(Action, Code, __VA__ARGS__)

#define ForEach(Action, N, ...) \
    GetMacro(N, __VA__ARGS__, \
	    FE7, FE6, FE5, \
	    FE4, FE3, FE2, \
	    FE1) \
	(Action, \
	GetMacro(N, __VA__ARGS__, \
	    GetLast8, GetLast7, GetLast6, \
	    GetLast5, GetLast4, GetLast4, \
	    GetLast3, GetLast2)(N, __VA__ARGS__), \
	N, __VA__ARGS__)

#define NID(N) \
    void pro##N##IAction(AST_node *parent, AST_node *child, int childNum)
    /* { \ */
	/* #define proNum N */

#define END \
    #undef proNum \
    }

#define NIDSHelper(N, Code) \
    NID(N) \
    Code \
    END

#define NIDS(N, ...) \
    ForEach(NIDSHelper, N, __VA__ARGS__)

NIDS(1, 2, 3, "Hello")
/* NIDS(1, 2, { printf("Hello"); printf("Hi"); }) */
/* NID(2) */
/* END */
