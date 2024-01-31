// -*- C++ -*-

//==============================================================================
/**
* @file       Expr_Tree_Builder.cpp
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#include "Expr_Tree_Builder.h"
#include "Expr_Node.h"
#include "Stack.h"

//
// Expr_Tree_Builder
//
Expr_Tree_Builder::Expr_Tree_Builder (void)
:tree_(0)
{}

//
// ~Expr_Tree_Builder
//
Expr_Tree_Builder::~Expr_Tree_Builder (void)
{
	if (this->tree_!=0)
	{
		delete this->tree_;
	}
}

//
// set_expression
//
void Expr_Tree_Builder::start_expression (void)
{
	//this->tree_=new Expr_Node();
}

//
// build_number (int)
//
void Expr_Tree_Builder::build_number (int n)
{
}

//
// build_unary_operand
//
void Expr_Tree_Builder::build_unary_operator (void)
{
}

//
// build_addition_operator
//
void Expr_Tree_Builder::build_addition_operator (void)
{}

//
// build_subtraction_operator
//
void Expr_Tree_Builder::build_subtraction_operator (void)
{
}

//
// build_multiplication_operator
//
void Expr_Tree_Builder::build_multiplication_operator (void)
{}

//
// build_division_operator
//
void Expr_Tree_Builder::build_division_operator (void)
{
}

//
// build_modulus_operator
//
void Expr_Tree_Builder::build_modulus_operator (void)
{
}

//
// build_left_parenthesis
//
void Expr_Tree_Builder::build_open_parenthesis (void)
{
}

//
// build_right_parenthesis
//
void Expr_Tree_Builder::build_close_parenthesis (void)
{
}

//
// parse_expression
//
void Expr_Tree_Builder::parse_expression (const std::string exp)
{
    char flag;
    Expr_Builder * builder = 0;
    int i=0;
    while(exp!="" && i<exp.length()){
		flag=exp[i];
        if(flag == '+')
        {
            builder->build_addition_operator();
        }
        else if(flag == '-')
        {
			builder->build_subtraction_operator();
        }
        else if(flag == '*')
        {
            builder->build_multiplication_operator();
        }
        else if(flag == '/')
        {
            builder->build_division_operator();
        }
        else if(flag == '%')
        {
            builder->build_modulus_operator();
        }
        else if(flag == '('){
            builder->build_open_parenthesis();
        }
        else if(flag == ')'){
            builder->build_close_parenthesis();
        }
        else{
            builder->build_number((int)flag);
        }
		i++;
    }
}

//
// get_expression
//
Expr_Node * Expr_Tree_Builder::get_expression (void)
{
	return this->tree_;
}
