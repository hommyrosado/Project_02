
/**
 * min.cpp
 * CMSC 330 – Project 2
 * Name: Hommy Rosado
 * Date: 5/5/2025
 * Description: Implements the Min binary expression class (< operator)
 */
#include "min.h"

Min::Min(Expression* left, Expression* right) {
    this->left = left;
    this->right = right;
}

double Min::evaluate() const {
    return min(left->evaluate(), right->evaluate());
}
