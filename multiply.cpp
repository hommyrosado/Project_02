
/**
 * multiply.cpp
 * CMSC 330 – Project 2
 * Name: Hommy Rosado
 * Date: 5/5/2025
 * Description: Implements the Multiply binary expression class (* operator)
 */
#include "multiply.h"

Multiply::Multiply(Expression* left, Expression* right) {
    this->left = left;
    this->right = right;
}

double Multiply::evaluate() const {
    return left->evaluate() * right->evaluate();
}
