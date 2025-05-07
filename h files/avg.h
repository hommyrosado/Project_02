
/**
 * avg.h
 * CMSC 330 – Project 2
 * Name: Hommy Rosado
 * Date: 5/5/2025
 * Description: Defines the Avg binary expression class (& operator)
 */
#ifndef AVG_H
#define AVG_H

#include "expression.h"

class Avg : public Expression {
public:
    Avg(Expression* left, Expression* right);
    double evaluate() const override;
private:
    Expression* left;
    Expression* right;
};

#endif
