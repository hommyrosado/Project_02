
/**
 * max.h
 * CMSC 330 – Project 2
 * Name: Hommy Rosado
 * Date: 5/5/2025
 * Description: Defines the Max binary expression class (> operator)
 */
#ifndef MAX_H
#define MAX_H

#include "expression.h"

class Max : public Expression {
public:
    Max(Expression* left, Expression* right);
    double evaluate() const override;
private:
    Expression* left;
    Expression* right;
};

#endif
