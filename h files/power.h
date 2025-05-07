
/**
 * power.h
 * CMSC 330 – Project 2
 * Name: Hommy Rosado
 * Date: 5/5/2025
 * Description: Defines the Power binary expression class (^ operator)
 */
#ifndef POWER_H
#define POWER_H

#include "expression.h"

class Power : public Expression {
public:
    Power(Expression* left, Expression* right);
    double evaluate() const override;
private:
    Expression* left;
    Expression* right;
};

#endif
