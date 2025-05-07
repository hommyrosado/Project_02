
/**
 * mod.h
 * CMSC 330 – Project 2
 * Name: Hommy Rosado
 * Date: 5/5/2025
 * Description: Defines the Mod binary expression class (% operator)
 */
#ifndef MOD_H
#define MOD_H

#include "expression.h"

class Mod : public Expression {
public:
    Mod(Expression* left, Expression* right);
    double evaluate() const override;
private:
    Expression* left;
    Expression* right;
};

#endif
