# Calculator: Tree Expression Evaluator using Composite Pattern, the Visitor Pattern, and the Builder Pattern

## Overview

In this, implemented a basic expression evaluator using the Stack data structure created in OOPD_Stack-Queue_c. The evaluator will handle mathematical expressions with operators such as +, -, /, *, %, as well as parentheses and integers (positive and negative). The program will utilize the Infix to Postfix conversion algorithm to process expressions in O(n) time using composite, visitor and builder patterns.

- Composite Pattern : The Composite Pattern is utilized in the design of expression nodes. The Expr_Node class serves as the component interface, and its concrete subclasses (Binary_Expr_Node and Unary_Expr_Node) act as the composite and leaf classes. This allows for the creation of complex expression trees using a uniform interface.

- Visitor Pattern : The Visitor Pattern is employed for tree traversal and evaluation. The Eval_Expr_Tree class acts as the visitor, implementing specific visit methods for each type of expression node. This pattern decouples the algorithm (evaluation) from the structure (expression nodes) and allows for easy extension with new operations.

- Builder Pattern : The Builder Pattern is used to construct expression trees in a step-by-step manner. The Expr_Builder and Expr_Tree_Builder classes define the construction process, and clients can use these builders to create complex expression structures without exposing their internal representation.


### Compilation
- **MPC File**: `assignment4.mpc`
  - Compilation command: `make -f Makefile.assignment4`
 
### File Structure
- driver.cpp: Main driver program to interact with the expression evaluator.
- Expr_Node.h, Binary_Expr_Node.h, Unary_Expr_Node.h: Classes representing different types of expression nodes.
- Addition_Node.h, Subtraction_Node.h, Multiplication_Node.h, Division_Node.h, Modulus_Node.h: Classes representing specific binary expression nodes.
- Expr_Builder.h, Expr_Tree_Builder.h: Classes responsible for building expression trees using the Builder Pattern.
- Eval_Expr_Tree.h: Class for evaluating expression trees using the Visitor Pattern.
- Print_Inorder_Expression.h: Class for printing expressions in infix notation using the Visitor Pattern.
- Array.h, Stack.h: Template classes for array and stack implementations.
- Expr_Node_Visitor.h: Interface for the Visitor Pattern.
- Print_Inorder_Expression.cpp, Eval_Expr_Tree.cpp, Expr_Tree_Builder.cpp: Implementation files for the respective patterns.

## How to Run
1. Compile the program using the provided MPC file.
2. Run the executable (`assignment4`).
3. Enter mathematical expressions with spaces between each token.
4. The program will continuously process expressions until the user types "QUIT" (all caps).
5. View the results on the standard output.

## Runtime Requirements
- The program must handle the operators +, -, /, *, %, as well as parentheses and integers (positive and negative).
- All input should come from STDIN, and output should go to STDOUT.
- The program must loop until the user types "QUIT" (all caps).

## Important Notes
- Ensure that your MPC file is named `assignment4.mpc`.
- Modularize your classes for better design.
