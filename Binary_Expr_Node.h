// -*- C++ -*-

//==============================================================================
/**
 * @file       Binary_Expr_Node.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _BINARY_EXPR_NODE_H_
#define _BINARY_EXPR_NODE_H_

#include "Expr_Node.h"

/**
 * @class Binary_Expr_Node
 *
 * Basic implementation of Binary_Expr_Node class.
 */
class Binary_Expr_Node : public Expr_Node
{
public:

	/// Default constructor.
	Binary_Expr_Node (void);

  ///Initializing constructor.
	Binary_Expr_Node(Expr_Node * n1, Expr_Node * n2);

	/// Destructor.
	virtual ~Binary_Expr_Node (void);

	/**
	* Used to traverse the tree
	* 
	* @return         returns the node evaluation.
	*/
	virtual int eval (void) = 0;

	virtual int Binary_Eval (int n1, int n2) = 0;

	virtual void accept (Expr_Node_Visitor & v) = 0;

protected:

  /// @brief left node
  Expr_Node * left_; 

  /// @brief right node
  Expr_Node * right_;

};

#endif   // !defined _BINARY_EXPR_NODE_H_