#ifndef SDTACTION_H
#define SDTACTION_H

#include <malloc.h>
#include <inttypes.h>

#include "syntax_tree.h"
#include "symbol_table.h"
#include "Pointer.h"

#include "DebugMacro.h"
#include "AssertMacro.h"
#include "DefineMacro.h"
#include "HelperMacro.h"

#include "3.h"
#include "4.h"
#include "7.h"
#include "8.h"
#include "9.h"
#include "10.h"
#include "11.h"

/* 第一个参数是父亲节点，第二个参数是需要准备继承属性的儿子节点 */
/* 第三个参数是需要准备继承属性的节点的编号 */
/* 0代表父节点 */
/* 1-n代表子节点 */
typedef void(*SDTIAction)(AST_node *, AST_node *, int childNum);
/* 在所有儿子节点的继承属性+综合属性算完之后，可以算本节点的综合属性（本节点的继承属性也已经准备好） */
typedef void(*SDTSAction)(AST_node *);

void initActionTable();
void cleanActionTable();
void registerIAction(int proNum, SDTIAction action);
void registerSAction(int proNum, SDTSAction action);
void traversalTreePerformAction(AST_node *parent);

enum TypeKindEnum { BuildInType = 1, ArrayType, ReferType, FunctionType, AlgebraicDataType, GenericType, TypeParam };

typedef struct
{
    enum TypeKindEnum typeKind;
    void *node;
    void *nextInfo;
} TypeInfo;

/* 节点中的域除特别说明者，均为继承属性 */

enum BuildInTypeKindEnum { Int = 1, Float, Let };
/* 内建类型的node域填充BuildInTypeKindEnum */

typedef struct
{
    TypeInfo *arrayTo;
    int width;
} ArrayNode;

typedef struct
{
    TypeInfo *referTo;
} ReferNode;

typedef struct
{
    TypeInfo *currentInfo;
} FunctionNode;

typedef struct LN
{
    struct LN *lastBrother, *nextBrother;
    void *data;
} ListNode;

typedef struct
{
    char *constructorIdName;
    ListNode *fields;
} ConstructorNode;

typedef struct
{
    char *typeIdName;
    ListNode *constructors;
} AlgebraicDataTypeNode;

typedef struct
{
    char *genericTypeName;
} GenericTypeNode;

void printTypeInfo(TypeInfo *typeInfo);

#endif
