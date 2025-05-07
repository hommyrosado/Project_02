/**
 * symboltable.h
 * CMSC 330 – Advanced Programming
 * Name: Hommy Rosado
 * WEEK 08: PROJECT 2
 * Date: 5/5/2025
 * Description: C++ Application Expression Parser
 */

// This file contains the class definition of the SymbolTable class. The symbol table is represented
// with a vector (list) of type Symbol which is a pair consisting of a variable and its associated value.
// The body of its functions are defined in symboltable.cpp. 

class SymbolTable {
public:
    SymbolTable() {}
    void insert(string variable, double value);
    double lookUp(string variable) const;
private:
    struct Symbol {
        Symbol(string variable, double value) {
            this->variable = variable;
            this->value = value;
        }
        string variable;
        double value;
    };
    vector<Symbol> elements;
};


