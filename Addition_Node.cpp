// -*- C++ -*-

//==============================================================================
/**
 * @file       Addition_Node.cpp
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Addition_Node.h"
#include "Expr_Node_Visitor.h"

//
// Addition_Node
//
Addition_Node::Addition_Node (void)
:Binary_Expr_Node()
{}

//
// Addition_Node ( Expr_Node *, Expr_Node *)
//
Addition_Node::Addition_Node (Expr_Node * n1, Expr_Node * n2)
:Binary_Expr_Node (n1,n2)
{}

//
// ~Addition_Node
//
Addition_Node::~Addition_Node (void)
{
}

//
// Binary_Eval (int, int)
//
int Addition_Node::Binary_Eval (int n1, int n2)
{
	return n1+n2;
}

//
// accept (Expr_Node_Visitor &)
//
void Addition_Node::accept (Expr_Node_Visitor & V)
{
	V.Visit_Addition_Node(*this);
}