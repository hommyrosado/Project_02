/**
 * plus.h
 * CMSC 330 – Advanced Programming
 * Name: Hommy Rosado
 * WEEK 08: PROJECT 2
 * Date: 5/5/2025
 * Description: C++ Application Expression Parser
 */

// This file contains the class definition of the Plus class, which is a subclass of SubExpression,
// which in turn is a subclass of the Expression. Because both of its functions are one line functions, 
// they are implemented as inline functions. Its constructor initializes the left and right subexpressions
// it inherits from SubExpression by calling the constructor of the SubExpression class. Because
// it is an indirect subclass of Expression it must implement the evaluate function, which it does
// by returning the sum of the values of the two subexpressions.

class Plus: public SubExpression {
public:
    Plus(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate()  {
       return left->evaluate() + right->evaluate();
    }
};