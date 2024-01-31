// -*- C++ -*-

//==============================================================================
/**
 * @file       Unary_Expr_Node.cpp
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Unary_Expr_Node.h"

//
// Unary_Expr_Node
//
Unary_Expr_Node::Unary_Expr_Node (void)
:child_(0)
{}

//
// Unary_Expr_Node(Expr_Node *, Expr_Node *)
//
Unary_Expr_Node::Unary_Expr_Node (Expr_Node * n1)
:child_(n1)
{}

//
// ~Binary_Node
//
Unary_Expr_Node::~Unary_Expr_Node (void)
{
    delete this->child_;
}

//
// eval
//
int Unary_Expr_Node::eval (void)
{
	if (this->child_) 
        return this->child_->eval ();
}