/**
 * subexpression.cpp
 * CMSC 330 – Advanced Programming
 * Name: Hommy Rosado
 * WEEK 08: PROJECT 2
 * Date: 5/5/2025
 * Description: C++ Application Expression Parser
 */

// This file contains the body of the functions contained in The SubExpression class, which includes
// the constructor that initializes the left and right subexpressions and the static function parse
// parses the subexpression. Addition and subtraction are the two operators that are implemented.
// subexpression.cpp (MODIFIED)
#include <iostream>
#include <sstream>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
#include "negation.h"
#include "multiply.h"
#include "divide.h"
#include "mod.h"
#include "power.h"
#include "min.h"
#include "max.h"
#include "avg.h"
#include "ternary.h"
#include "quaternary.h"
#include <cmath>
#include <algorithm>
using std::min;
using std::max;

// Add includes for new operator classes here

SubExpression::SubExpression(Expression* left, Expression* right) {
    this->left = left;
    this->right = right;
}

Expression* SubExpression::parse(stringstream& in) {
    Expression *first, *second = nullptr, *third = nullptr, *fourth = nullptr;
    char op, paren;

    in >> ws;
    first = Operand::parse(in);
    in >> ws >> op;

    switch (op) {
        case '~':
            in >> paren; // consume ')'
            return new Negation(first);

        case '+': case '-': case '*': case '/':
        case '%': case '^': case '<': case '>': case '&':
            second = Operand::parse(in);
            in >> paren;
            return createBinaryOp(op, first, second);

        case '?':
            second = Operand::parse(in);
            third = Operand::parse(in);
            in >> paren;
            return new Ternary(first, second, third);

        case '#':
            second = Operand::parse(in);
            third = Operand::parse(in);
            fourth = Operand::parse(in);
            in >> paren;
            return new Quaternary(first, second, third, fourth);
    }
    return nullptr;
}

// Note: createBinaryOp, Negation, Ternary, Quaternary, and related headers/classes
// must be defined in your extended implementation for this to compile.


Expression* createBinaryOp(char op, Expression* left, Expression* right) {
    switch (op) {
        case '+': return new Plus(left, right);
        case '-': return new Minus(left, right);
        case '*': return new Multiply(left, right);
        case '/': return new Divide(left, right);
        case '%': return new Mod(left, right);
        case '^': return new Power(left, right);
        case '<': return new Min(left, right);
        case '>': return new Max(left, right);
        case '&': return new Avg(left, right);
        default: throw string("Invalid binary operator");
    }
}
