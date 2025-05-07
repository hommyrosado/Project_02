
/**
 * negation.cpp
 * CMSC 330 – Project 2
 * Name: Hommy Rosado
 * Date: 5/5/2025
 * Description: Implements the Negation unary expression class (~ operator)
 */
#include "negation.h"

Negation::Negation(Expression* operand) {
    this->operand = operand;
}

double Negation::evaluate() const {
    return -operand->evaluate();
}
