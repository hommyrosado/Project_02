
/**
 * mod.cpp
 * CMSC 330 – Project 2
 * Name: Hommy Rosado
 * Date: 5/5/2025
 * Description: Implements the Mod binary expression class (% operator)
 */
#include "mod.h"

Mod::Mod(Expression* left, Expression* right) {
    this->left = left;
    this->right = right;
}

double Mod::evaluate() const {
    return fmod(left->evaluate(), right->evaluate());
}
