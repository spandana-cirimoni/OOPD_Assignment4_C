// -*- C++ -*-

//==============================================================================
/**
 * @file       Modulus_Node.cpp
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Modulus_Node.h"
//#include "Expr_Node_Visitor.h"

//
// Modulus_Node
//
Modulus_Node::Modulus_Node (void)
:Binary_Expr_Node()
{}

//
// Modulus_Node ( Expr_Node *, Expr_Node *)
//
Modulus_Node::Modulus_Node (Expr_Node * n1, Expr_Node * n2)
:Binary_Expr_Node (n1,n2)
{}

//
// ~Modulus_Node
//
Modulus_Node::~Modulus_Node (void)
{
}

//
// Binary_Eval (int, int)
//
int Modulus_Node::Binary_Eval (int n1, int n2)
{
	return n1%n2;
}

//
// accept (Expr_Node_Visitor &)
//
void Modulus_Node::accept (Expr_Node_Visitor & V)
{
	V.Visit_Modulus_Node(*this);
}