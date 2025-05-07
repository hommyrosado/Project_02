
/**
 * quaternary.cpp
 * CMSC 330 – Project 2
 * Name: Hommy Rosado
 * Date: 5/5/2025
 * Description: Implements the Quaternary conditional expression class (# operator)
 */
#include "quaternary.h"

Quaternary::Quaternary(Expression* condition, Expression* negExpr, Expression* zeroExpr, Expression* posExpr) {
    this->condition = condition;
    this->negExpr = negExpr;
    this->zeroExpr = zeroExpr;
    this->posExpr = posExpr;
}

double Quaternary::evaluate() const {
    double cond = condition->evaluate();
    if (cond < 0) return negExpr->evaluate();
    if (cond == 0) return zeroExpr->evaluate();
    return posExpr->evaluate();
}
