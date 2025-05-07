/**
 * parse.cpp
 * CMSC 330 – Advanced Programming
 * Name: Hommy Rosado
 * WEEK 08: PROJECT 2
 * Date: 5/5/2025
 * Description: C++ Application Expression Parser
 */

// This file contains the body of the function parseName. That function consumes all alphanumeric 
// characters until the next whitespace and returns the name that those characters form.
// parse.cpp (MODIFIED)
#include <cctype>
#include <sstream>
#include <string>
using namespace std;

#include "parse.h"

string parseName(stringstream& in) {
    char ch;
    string name = "";

    in >> ws;
    if (isalpha(in.peek())) {
        in >> ch;
        name += ch;
    } else {
        return "";  // Invalid variable name start
    }
    while (isalnum(in.peek()) || in.peek() == '_') {
        in >> ch;
        name += ch;
    }
    return name;
}
