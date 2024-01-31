# Calculator: Tree Expression Evaluator using Composite Pattern, the Visitor Pattern, and the Builder Pattern

## Overview

In this, implemented a basic expression evaluator using the Stack data structure created in OOPD_Stack-Queue_c. The evaluator will handle mathematical expressions with operators such as +, -, /, *, %, as well as parentheses and integers (positive and negative). The program will utilize the Infix to Postfix conversion algorithm to process expressions in O(n) time using composite, visitor and builder patterns.


### Compilation
- **MPC File**: `assignment4.mpc`
  - Compilation command: `make -f Makefile.assignment4`

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
