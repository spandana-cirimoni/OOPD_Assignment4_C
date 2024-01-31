// -*- C++ -*-

//==============================================================================
/**
* @file       Expr_Builder.h
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _EXPR_BUILDER_H_
#define _EXPR_BUILDER_H_

#include "Expr_Node.h"
#include <string.h>
#include "Eval_Expr_Tree.h"

/**
* @class Expr_Builder
*
* Basic implementation of Expr_Builder class.
*/
class Expr_Builder
{
public:

	/// Default constructor.
	Expr_Builder (void);

	/// Destructor.
	virtual ~Expr_Builder (void);

	virtual void start_expression (void) = 0;

	virtual void build_number (int n) = 0;

	virtual void build_unary_operator (void) = 0;

	virtual void build_addition_operator (void) = 0;

	virtual void build_subtraction_operator (void) = 0;

	virtual void build_multiplication_operator (void) = 0;

	virtual void build_division_operator (void) = 0;

	virtual void build_modulus_operator (void) = 0;

	virtual void build_open_parenthesis (void) = 0;

	virtual void build_close_parenthesis (void) = 0;

	virtual void parse_expression (const std::string exp) =0;

	virtual Expr_Node * get_expression (void) = 0;

};

#endif // !_EXPR_BUILDER_H_
