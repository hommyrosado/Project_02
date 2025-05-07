
/**
 * negation.h
 * CMSC 330 – Project 2
 * Name: Hommy Rosado
 * Date: 5/5/2025
 * Description: Defines the Negation unary expression class (~ operator)
 */
#ifndef NEGATION_H
#define NEGATION_H

#include "expression.h"

class Negation : public Expression {
public:
    Negation(Expression* operand);
    double evaluate() const override;
private:
    Expression* operand;
};

#endif
