/**
 * variable.h
 * CMSC 330 – Advanced Programming
 * Name: Hommy Rosado
 * WEEK 08: PROJECT 2
 * Date: 5/5/2025
 * Description: C++ Application Expression Parser
 */

// This file contains the class definition of the Variable class. The variable is represented by its
// name, which the construcor initializes. Because this class is a subclass of Operand which in turn is 
// a subclass of Expression, it must implement the function evaluate, whose body is defined in variable.cpp.

class Variable: public Operand {
public:
    Variable(string name) {
        this->name = name;
    }
    double evaluate();
private:
    string name;
};