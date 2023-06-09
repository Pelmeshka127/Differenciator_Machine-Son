#include <math.h>

#define NODE cur_node

#define LEFT cur_node->left

#define RIGHT cur_node->right

#define EVAL(node)  \
    Eval(node)

#define dL  \
    Diff_Calc(my_tree, LEFT)

#define dR  \
    Diff_Calc(my_tree, RIGHT)

#define cL  \
    Diff_Copy_Node(LEFT)

#define cR  \
    Diff_Copy_Node(RIGHT)

#define ADD(left, right) \
    Tree_New_Node(Op_Type, Op_Add, left, right)

#define SUB(left, right) \
    Tree_New_Node(Op_Type, Op_Sub, left, right)

#define MUL(left, right) \
    Tree_New_Node(Op_Type, Op_Mul, left, right)

#define DIV(left, right) \
    Tree_New_Node(Op_Type, Op_Div, left, right)

#define POW(left, right) \
    Tree_New_Node(Op_Type, Op_Pow, left, right)

#define SIN(left)   \
    Tree_New_Node(Op_Type, Op_Sin, left, nullptr)

#define COS(left)   \
    Tree_New_Node(Op_Type, Op_Cos, left, nullptr)

#define LN(left)    \
    Tree_New_Node(Op_Type, Op_Ln, left, nullptr)

#define EXP(left)   \
    Tree_New_Node(Op_Type, Op_Exp, left, nullptr)

#define New_Num(data) \
    Tree_New_Node(Num_Type, data)

#define New_Var(data)  \
    Tree_New_Node(Var_Type, data)