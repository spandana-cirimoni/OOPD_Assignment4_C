// -*- C++ -*-
// $Id: Multiplication_Node.h

//==============================================================================
/**
* @file       Multiplication_Node.h
*
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _Multiplication_Node_H_
#define _Multiplication_Node_H_

#include "Binary_Expr_Node.h"

/**
 * @class Multiplication_Node
 *
 * Basic implementation of a standard Multiplication_Node class.
 */
class Multiplication_Node : public Binary_Expr_Node
{
public:
  /// Default constructor.
  Multiplication_Node (void);

  /// Initializing constructor.
	Multiplication_Node (Expr_Node * n1, Expr_Node * n2);

	/// Destructor.
	virtual ~Multiplication_Node (void);

	virtual int Binary_Eval (int n1,int n2);

	/**
	* Accept method for Multiplication Node.
	*
	* @param[in]        V           Expr_Node_Visitor reference.
	*/
	virtual void accept (Expr_Node_Visitor & V);

};

#include "Multiplication_Node.cpp"

#endif   // !defined _Multiplication_Node_H_