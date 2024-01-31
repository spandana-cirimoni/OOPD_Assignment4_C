// -*- C++ -*-
// $Id: Division_Node.h

//==============================================================================
/**
* @file       Division_Node.h
*
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _Division_Node_H_
#define _Division_Node_H_

#include "Binary_Expr_Node.h"

/**
 * @class Division_Node
 *
 * Basic implementation of a standard Division_Node class.
 */
class Division_Node : public Binary_Expr_Node
{
public:
  /// Default constructor.
  Division_Node (void);

  /// Initializing constructor.
	Division_Node (Expr_Node * n1, Expr_Node * n2);

	/// Destructor.
	virtual ~Division_Node (void);

	virtual int Binary_Eval (int n1,int n2);

	virtual void accept (Expr_Node_Visitor & V);

};

#include "Division_Node.cpp"

#endif   // !defined _Division_Node_H_