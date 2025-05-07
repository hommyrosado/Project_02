/**
 * symboltable.cpp
 * CMSC 330 – Advanced Programming
 * Name: Hommy Rosado
 * WEEK 08: PROJECT 2
 * Date: 5/5/2025
 * Description: C++ Application Expression Parser
 */

// This file contains the body of the functions contained in The SymbolTable class. The insert function 
// inserts a new variable symbol and its value into the symbol table and the lookUp function returns
// that value of the supplied variable symbol name.

#include <string>
#include <vector>
using namespace std;

#include "symboltable.h"
#include "variableexception.h"


void SymbolTable::insert(string variable, double value) {
    if (table.find(variable) != table.end()) {
        throw VariableException("Variable '" + variable + "' initialized more than once.");
    }
    const Symbol& symbol = Symbol(variable, value);
    elements.push_back(symbol);
}

double SymbolTable::lookUp(string variable) const {
    if (table.find(variable) == table.end()) {
        throw VariableException("Variable '" + variable + "' used before initialization.");
    }
    for (int i = 0; i < elements.size(); i++)
        if (elements[i].variable == variable)
             return elements[i].value;
    return -1;
}



void SymbolTable::clear() {
    table.clear();
}
