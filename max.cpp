
/**
 * max.cpp
 * CMSC 330 – Project 2
 * Name: Hommy Rosado
 * Date: 5/5/2025
 * Description: Implements the Max binary expression class (> operator)
 */
#include "max.h"

Max::Max(Expression* left, Expression* right) {
    this->left = left;
    this->right = right;
}

double Max::evaluate() const {
    return max(left->evaluate(), right->evaluate());
}
