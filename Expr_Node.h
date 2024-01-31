// -*- C++ -*-

//==============================================================================
/**
* @file       Expr_Node.h
*
*
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _EXPR_NODE_H_
#define _EXPR_NODE_H_

#include <stdexcept>

class Expr_Node_Visitor;

/**
* @class Expr_Node
*
* Basic implementation of Expr_Node.
*/
class Expr_Node
{
public:

	/// Default constructor.
	Expr_Node (void);

	/// Destructor.
	virtual ~Expr_Node (void);

	/**
	* Used to traverse the tree
	* 
	* @return         returns the node evaluation.
	*/
	virtual int eval (void) = 0;

	virtual std::string get_node_type()=0;

	virtual void accept (Expr_Node_Visitor & v) = 0;

private:

	/// Copy Constructor.
	Expr_Node (const Expr_Node &);

	/// Assignment Operator.
	const Expr_Node & operator = (const Expr_Node &);

};

#endif // !_EXPR_NODE_H_
