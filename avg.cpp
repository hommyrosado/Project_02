
/**
 * avg.cpp
 * CMSC 330 – Project 2
 * Name: Hommy Rosado
 * Date: 5/5/2025
 * Description: Implements the Avg binary expression class (& operator)
 */
#include "avg.h"

Avg::Avg(Expression* left, Expression* right) {
    this->left = left;
    this->right = right;
}

double Avg::evaluate() const {
    return (left->evaluate() + right->evaluate()) / 2.0;
}
