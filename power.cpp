
/**
 * power.cpp
 * CMSC 330 – Project 2
 * Name: Hommy Rosado
 * Date: 5/5/2025
 * Description: Implements the Power binary expression class (^ operator)
 */
#include "power.h"

Power::Power(Expression* left, Expression* right) {
    this->left = left;
    this->right = right;
}

double Power::evaluate() const {
    return pow(left->evaluate(), right->evaluate());
}
