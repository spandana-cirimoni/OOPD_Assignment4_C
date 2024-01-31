// -*- C++ -*-

//==============================================================================
/**
* @file       Print_Inorder_Expression.h
*
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _Print_Inorder_Expression_
#define _Print_Inorder_Expression_

#include "Expr_Node_Visitor.h"
#include <stdexcept>
#include <ostream>

/**
* @class Print_Inorder_Expression
*
* Basic implementation of Print_Inorder_Expression.
*/
class Print_Inorder_Expression : public Expr_Node_Visitor
{
public:

	/// Default constructor.
	Print_Inorder_Expression (void);

	/// Destructor.
	virtual ~Print_Inorder_Expression (void);

    virtual void Visit_Addition_Node (const Addition_Node & node);

    virtual void Visit_Division_Node (const Division_Node & node);

    virtual void Visit_Multiplication_Node (const Multiplication_Node & node);

	virtual void Visit_Modulus_Node (const Modulus_Node & node);

	virtual void Visit_Number_Node (const Number_Node & node);

    virtual void Visit_Subtraction_Node (const Subtraction_Node & node);

	virtual void Visit_Unary_Expr_Node (const Unary_Expr_Node & node);

private:

	// output stream
	std::ostream out_;

};


#endif // !_Print_Inorder_Expression_