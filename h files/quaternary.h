
/**
 * quaternary.h
 * CMSC 330 – Project 2
 * Name: Hommy Rosado
 * Date: 5/5/2025
 * Description: Defines the Quaternary conditional expression class (# operator)
 */
#ifndef QUATERNARY_H
#define QUATERNARY_H

#include "expression.h"

class Quaternary : public Expression {
public:
    Quaternary(Expression* condition, Expression* negExpr, Expression* zeroExpr, Expression* posExpr);
    double evaluate() const override;
private:
    Expression* condition;
    Expression* negExpr;
    Expression* zeroExpr;
    Expression* posExpr;
};

#endif
