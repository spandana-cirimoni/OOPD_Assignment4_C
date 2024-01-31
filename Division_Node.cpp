// -*- C++ -*-

//==============================================================================
/**
 * @file       Division_Node.cpp
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Division_Node.h"
#include "Expr_Node_Visitor.h"

//
// Division_Node
//
Division_Node::Division_Node (void)
:Binary_Expr_Node()
{}

//
// Division_Node ( Expr_Node *, Expr_Node *)
//
Division_Node::Division_Node (Expr_Node * n1, Expr_Node * n2)
:Binary_Expr_Node (n1,n2)
{}

//
// ~Division_Node
//
Division_Node::~Division_Node (void)
{
}

//
// Binary_Eval (int, int)
//
int Division_Node::Binary_Eval (int n1, int n2)
{
	return n1/n2;
}

//
// accept (Expr_Node_Visitor &)
//
void Division_Node::accept (Expr_Node_Visitor & V)
{
	V.Visit_Division_Node(*this);
}