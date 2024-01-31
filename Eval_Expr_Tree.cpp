// -*- C++ -*-

//==============================================================================
/**
* @file       Eval_Expr_Tree.cpp
*
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#include "Eval_Expr_Tree.h"

//
// Eval_Expr_Tree
//

Eval_Expr_Tree::Eval_Expr_Tree (void)
:result_(0)
{}

//
// ~Eval_Expr_Tree
//
Eval_Expr_Tree::~Eval_Expr_Tree (void)
{}

//
// result
//
int Eval_Expr_Tree::result (void) const
{
	return this->result_;
}