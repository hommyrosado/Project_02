
/**
 * multiply.h
 * CMSC 330 – Project 2
 * Name: Hommy Rosado
 * Date: 5/5/2025
 * Description: Defines the Multiply binary expression class (* operator)
 */
#ifndef MULTIPLY_H
#define MULTIPLY_H

#include "expression.h"

class Multiply : public Expression {
public:
    Multiply(Expression* left, Expression* right);
    double evaluate() const override;
private:
    Expression* left;
    Expression* right;
};

#endif
