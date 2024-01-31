// -*- C++ -*-
// $Id: Addition_Node.h

//==============================================================================
/**
* @file       Addition_Node.h
*
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _ADDITION_NODE_H_
#define _ADDITION_NODE_H_

#include "Binary_Expr_Node.h"

/**
 * @class Addition_Node
 *
 * Basic implementation of a standard Addition_Node class.
 */
class Addition_Node : public Binary_Expr_Node
{
public:
  /// Default constructor.
  Addition_Node (void);

  /// Initializing constructor.
	Addition_Node (Expr_Node * n1, Expr_Node * n2);

	/// Destructor.
	virtual ~Addition_Node (void);

	virtual int Binary_Eval (int n1,int n2);

	virtual void accept (Expr_Node_Visitor & V);

};

#include "Addition_Node.cpp"

#endif   // !defined _ADDITION_NODE_H_