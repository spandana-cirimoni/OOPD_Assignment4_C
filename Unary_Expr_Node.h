// -*- C++ -*-

//==============================================================================
/**
 * @file       Unary_Expr_Node.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Unary_Expr_Node_H_
#define _Unary_Expr_Node_H_

#include "Expr_Node.h"

/**
 * @class Unary_Expr_Node
 *
 * Basic implementation of Unary_Expr_Node class.
 */
class Unary_Expr_Node : public Expr_Node
{
public:

	/// Default constructor.
	Unary_Expr_Node (void);

    /// Initializing constructor.
	Unary_Expr_Node(Expr_Node * n1);

	/// Destructor.
	virtual ~Unary_Expr_Node (void);

	/**
	* Used to traverse the tree
	* 
	* @return         returns the node evaluation.
	*/
	virtual int eval (void) = 0;

	virtual void accept (Expr_Node_Visitor & v) = 0;

protected:

  /// @brief child node
  Expr_Node * child_; 

};

#endif   // !defined _Unary_Expr_Node_H_