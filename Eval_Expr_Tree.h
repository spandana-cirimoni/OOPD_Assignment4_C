// -*- C++ -*-

//==============================================================================
/**
* @file       Eval_Expr_Tree.h
*
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _EVAL_EXPR_TREE_
#define _EVAL_EXPR_TREE_

#include "Expr_Node_Visitor.h"

/**
* @class Eval_Expr_Tree
*
* Basic implementation of Eval_Expr_Tree.
*/
class Eval_Expr_Tree : public Expr_Node_Visitor
{
public:

	/// Default constructor.
	Eval_Expr_Tree (void);

	/// Destructor.
	virtual ~Eval_Expr_Tree (void);

    virtual void Visit_Addition_Node (const Addition_Node & node);

    virtual void Visit_Division_Node (const Division_Node & node);

    virtual void Visit_Multiplication_Node (const Multiplication_Node & node);

	virtual void Visit_Modulus_Node (const Modulus_Node & node);

	virtual void Visit_Number_Node (const Number_Node & node);

    virtual void Visit_Subtraction_Node (const Subtraction_Node & node);

	virtual void Visit_Unary_Expr_Node (const Unary_Expr_Node & node);

	int result (void) const;

private:

	//To store data.
	int result_;

};


#endif // !_EVAL_EXPR_TREE_