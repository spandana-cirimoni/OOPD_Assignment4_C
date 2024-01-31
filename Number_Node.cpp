// -*- C++ -*-

//==============================================================================
/**
 * @file       Number_Node.cpp
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Number_Node.h"

//
// Number_Node
//
Number_Node::Number_Node (void)
:num_(0)
{}

//
// Number_Node(int)
//
Number_Node::Number_Node (int num)
:num_(num)
{}

//
// ~Binary_Node
//
Number_Node::~Number_Node (void)
{}

//
// eval
//
int Number_Node::eval (void)
{
	if (this->num_) 
        return this->num_;
}