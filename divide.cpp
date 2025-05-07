
/**
 * divide.cpp
 * CMSC 330 – Project 2
 * Name: Hommy Rosado
 * Date: 5/5/2025
 * Description: Implements the Divide binary expression class (/ operator)
 */
#include "divide.h"

Divide::Divide(Expression* left, Expression* right) {
    this->left = left;
    this->right = right;
}

double Divide::evaluate() const {
    return left->evaluate() / right->evaluate();
}
