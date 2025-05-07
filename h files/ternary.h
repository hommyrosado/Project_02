
/**
 * ternary.h
 * CMSC 330 – Project 2
 * Name: Hommy Rosado
 * Date: 5/5/2025
 * Description: Defines the Ternary conditional expression class (? operator)
 */
#ifndef TERNARY_H
#define TERNARY_H

#include "expression.h"

class Ternary : public Expression {
public:
    Ternary(Expression* condition, Expression* trueExpr, Expression* falseExpr);
    double evaluate() const override;
private:
    Expression* condition;
    Expression* trueExpr;
    Expression* falseExpr;
};

#endif
