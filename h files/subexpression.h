/**
 * subexpressions.h
 * CMSC 330 – Advanced Programming
 * Name: Hommy Rosado
 * WEEK 08: PROJECT 2
 * Date: 5/5/2025
 * Description: C++ Application Expression Parser
 */

// This file contains the class definition of the SubExpression class, which is a subclass of Expression.
// Because it does not implement the abstract function evalauate, it is an abstract class. SubExpression
// objects are represented with the left and right subexpressions. The body of its constructor and the
// static (class) function parse are defined in subexpression.cpp. 

class SubExpression: public Expression {
public:
    SubExpression(Expression* left, Expression* right);
    static Expression* parse(stringstream& in);
protected: 
    Expression* left;
    Expression* right;
};    