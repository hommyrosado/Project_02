/**
 * operand.cpp
 * CMSC 330 – Advanced Programming
 * Name: Hommy Rosado
 * WEEK 08: PROJECT 2
 * Date: 5/5/2025
 * Description: C++ Application Expression Parser
 */

// This file contains the body of the function parseName contained in the Operand class. That function
// parses the next token. When the next non-whitespace character is a digit, it assumes a literal is next. 
// When the next character is a left parenthesis, a recursive call is made to parse the subexpression.
// Otherwise the next token is assumed to a variable. No checks are made to ensure correct syntax.
// operand.cpp (MODIFIED)
#include <cctype>
#include <iostream>
#include <sstream>
#include <list>
#include <string>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "variable.h"
#include "literal.h"
#include "parse.h"

Expression* Operand::parse(stringstream& in) {
    char paren;
    double value;

    in >> ws;
    if (isdigit(in.peek()) || in.peek() == '.') {
        in >> value;
        return new Literal(value);
    }
    if (in.peek() == '(') {
        in >> paren;
        return SubExpression::parse(in);
    } else {
        return new Variable(parseName(in));
    }
    return 0;
}
