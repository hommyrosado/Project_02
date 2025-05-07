
/**
 * divide.h
 * CMSC 330 – Project 2
 * Name: Hommy Rosado
 * Date: 5/5/2025
 * Description: Defines the Divide binary expression class (/ operator)
 */
#ifndef DIVIDE_H
#define DIVIDE_H

#include "expression.h"

class Divide : public Expression {
public:
    Divide(Expression* left, Expression* right);
    double evaluate() const override;
private:
    Expression* left;
    Expression* right;
};

#endif
