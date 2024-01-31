// -*- C++ -*-

//==============================================================================
/**
 * @file       Number_Node.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Number_Node_H_
#define _Number_Node_H_

#include "Expr_Node.h"

/**
 * @class Number_Node
 *
 * Basic implementation of Number_Node class.
 */
class Number_Node : public Expr_Node
{
public:

	/// Default constructor.
	Number_Node (void);

  ///Initializing constructor.
	Number_Node(int num);

	/// Destructor.
	virtual ~Number_Node (void);

	/**
	* Used to traverse the tree
	* 
	* @return         returns the node evaluation.
	*/
	virtual int eval (void) = 0;

	virtual void accept (Expr_Node_Visitor & v) = 0;

protected:

  /// @brief number
  int num_;

};

#endif   // !defined _Number_Node_H_