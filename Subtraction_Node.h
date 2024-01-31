// -*- C++ -*-
// $Id: Subtraction_Node.h

//==============================================================================
/**
* @file       Subtraction_Node.h
*
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _Subtraction_Node_H_
#define _Subtraction_Node_H_

#include "Binary_Expr_Node.h"

/**
 * @class Subtraction_Node
 *
 * Basic implementation of a standard Subtraction_Node class.
 */
class Subtraction_Node : public Binary_Expr_Node
{
public:
  /// Default constructor.
  Subtraction_Node (void);

  /// Initializing constructor.
	Subtraction_Node (Expr_Node * n1, Expr_Node * n2);

	/// Destructor.
	virtual ~Subtraction_Node (void);

	virtual int Binary_Eval (int n1,int n2);

	virtual void accept (Expr_Node_Visitor & V);

};

#endif   // !defined _Subtraction_Node_H_