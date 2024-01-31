// -*- C++ -*-
// $Id: Modulus_Node.h

//==============================================================================
/**
* @file       Modulus_Node.h
*
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _Modulus_Node_H_
#define _Modulus_Node_H_

#include "Binary_Expr_Node.h"

/**
 * @class Modulus_Node
 *
 * Basic implementation of a standard Modulus_Node class.
 */
class Modulus_Node : public Binary_Expr_Node
{
public:
	/// Default constructor.
	Modulus_Node (void);

	/// Initializing constructor.
	Modulus_Node (Expr_Node * n1, Expr_Node * n2);

	/// Destructor.
	virtual ~Modulus_Node (void);

	virtual int Binary_Eval (int n1,int n2);

	virtual void accept (Expr_Node_Visitor & V);

};

#include "Modulus_Node.cpp"

#endif   // !defined _Modulus_Node_H_