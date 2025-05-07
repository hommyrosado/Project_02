
/**
 * min.h
 * CMSC 330 – Project 2
 * Name: Hommy Rosado
 * Date: 5/5/2025
 * Description: Defines the Min binary expression class (< operator)
 */
#ifndef MIN_H
#define MIN_H

#include "expression.h"

class Min : public Expression {
public:
    Min(Expression* left, Expression* right);
    double evaluate() const override;
private:
    Expression* left;
    Expression* right;
};

#endif
