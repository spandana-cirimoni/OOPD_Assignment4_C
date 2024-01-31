// -*- C++ -*-

//==============================================================================
/**
* @file       Expr_Node_Visitor.h
*
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _EXPR_NODE_VISITOR_
#define _EXPR_NODE_VISITOR_

#include "Addition_Node.h"
#include "Division_Node.h"
#include "Multiplication_Node.h"
#include "Modulus_Node.h"
#include "Number_Node.h"
#include "Subtraction_Node.h"
#include "Unary_Expr_Node.h"

/**
* @class Expr_Node_Visitor
*
* Basic implementation of Expr_Node_Visitor class.
*/
class Expr_Node_Visitor
{
public:

	/// Default constructor.
	Expr_Node_Visitor (void);

	/// Destructor.
	virtual ~Expr_Node_Visitor (void);

    virtual void Visit_Addition_Node (const Addition_Node & node) = 0;

    virtual void Visit_Division_Node (const Division_Node & node) = 0;

    virtual void Visit_Multiplication_Node (const Multiplication_Node & node) = 0;

	virtual void Visit_Modulus_Node (const Modulus_Node & node) = 0;

	virtual void Visit_Number_Node (const Number_Node & node) = 0;

    virtual void Visit_Subtraction_Node (const Subtraction_Node & node) = 0;

	virtual void Visit_Unary_Expr_Node (const Unary_Expr_Node & node) = 0;

};

#endif // !_EXPR_NODE_VISITOR_