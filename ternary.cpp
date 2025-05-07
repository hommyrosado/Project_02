
/**
 * ternary.cpp
 * CMSC 330 – Project 2
 * Name: Hommy Rosado
 * Date: 5/5/2025
 * Description: Implements the Ternary conditional expression class (? operator)
 */
#include "ternary.h"

Ternary::Ternary(Expression* condition, Expression* trueExpr, Expression* falseExpr) {
    this->condition = condition;
    this->trueExpr = trueExpr;
    this->falseExpr = falseExpr;
}

double Ternary::evaluate() const {
    return condition->evaluate() != 0 ? trueExpr->evaluate() : falseExpr->evaluate();
}
