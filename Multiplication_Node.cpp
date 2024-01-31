// -*- C++ -*-

//==============================================================================
/**
 * @file       Multiplication_Node.cpp
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Multiplication_Node.h"
//#include "Expr_Node_Visitor.h"

//
// Multiplication_Node
//
Multiplication_Node::Multiplication_Node (void)
:Binary_Expr_Node()
{}

//
// Multiplication_Node ( Expr_Node *, Expr_Node *)
//
Multiplication_Node::Multiplication_Node (Expr_Node * n1, Expr_Node * n2)
:Binary_Expr_Node (n1,n2)
{}

//
// ~Multiplication_Node
//
Multiplication_Node::~Multiplication_Node (void)
{
}

//
// Binary_Eval (int, int)
//
int Multiplication_Node::Binary_Eval (int n1, int n2)
{
	return n1*n2;
}

//
// accept (Expr_Node_Visitor &)
//
void Multiplication_Node::accept (Expr_Node_Visitor & V)
{
	V.Visit_Multiplication_Node(*this);
}