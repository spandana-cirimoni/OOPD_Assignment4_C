// -*- C++ -*-

//==============================================================================
/**
 * @file       Binary_Expr_Node.cpp
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Binary_Expr_Node.h"

//
// Binary_Expr_Node
//
Binary_Expr_Node::Binary_Expr_Node (void)
:left_(0),
right_(0)
{}

//
// Binary_Expr_Node(Expr_Node *, Expr_Node *)
//
Binary_Expr_Node::Binary_Expr_Node (Expr_Node * n1, Expr_Node * n2)
:left_(n1),
right_(n2)
{}

//
// ~Binary_Node
//
Binary_Expr_Node::~Binary_Expr_Node (void)
{
    delete this->left_;
    delete this->right_;
}

//
// eval
//
int Binary_Expr_Node::eval (void)
{
	int n1=0;
	int n2=0;
    if(this->left_)
        n1=this->left_->eval();
    if(this->right_)
        n2=this->right_->eval();
	int result=this->Binary_Eval(n1,n2);
	return result;
}