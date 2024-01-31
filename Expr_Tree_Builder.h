// -*- C++ -*-

//==============================================================================
/**
* @file       Expr_Tree_Builder.h
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _EXPR_TREE_BUILDER_H_
#define _EXPR_TREE_BUILDER_H_

#include "Expr_Builder.h"
#include "Expr_Node.h"

/**
* @class Expr_Tree_Builder
*
* Basic implementation of Expr_Tree_Builder class.
*/
class Expr_Tree_Builder
{
public:

	/// Default constructor.
	Expr_Tree_Builder (void);

	/// Destructor.
	virtual ~Expr_Tree_Builder (void);

	virtual void start_expression (void)  ;

	virtual void build_number (int n)  ;

	virtual void build_unary_operator (void);

	virtual void build_addition_operator (void)  ;

	virtual void build_subtraction_operator (void)  ;

	virtual void build_multiplication_operator (void)  ;

	virtual void build_division_operator (void)  ;

	virtual void build_modulus_operator (void)  ;

	virtual void build_open_parenthesis (void)  ;

	virtual void build_close_parenthesis (void)  ;

    virtual Expr_Node * get_expression (void);

	virtual void parse_expression (const std::string exp);

private:

	Expr_Node * tree_;
};

#endif // !_Expr_Tree_Builder_H_