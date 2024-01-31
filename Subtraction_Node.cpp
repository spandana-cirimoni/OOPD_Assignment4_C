// -*- C++ -*-

//==============================================================================
/**
 * @file       Subtraction_Node.cpp
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Subtraction_Node.h"
//#include "Expr_Node_Visitor.h"

//
// Subtraction_Node
//
Subtraction_Node::Subtraction_Node (void)
:Binary_Expr_Node()
{}

//
// Subtraction_Node ( Expr_Node *, Expr_Node *)
//
Subtraction_Node::Subtraction_Node (Expr_Node * n1, Expr_Node * n2)
:Binary_Expr_Node (n1,n2)
{}

//
// ~Subtraction_Node
//
Subtraction_Node::~Subtraction_Node (void)
{
}

//
// Binary_Eval (int, int)
//
int Subtraction_Node::Binary_Eval (int n1, int n2)
{
	return n1-n2;
}

//
// accept (Expr_Node_Visitor &)
//
void Subtraction_Node::accept (Expr_Node_Visitor & V)
{
	V.Visit_Subtraction_Node(*this);
}