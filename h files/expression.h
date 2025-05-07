/**
 * expressions.h
 * CMSC 330 – Advanced Programming
 * Name: Hommy Rosado
 * WEEK 08: PROJECT 2
 * Date: 5/5/2025
 * Description: C++ Application Expression Parser
 */

// This file contains the definition of the Expression class, which is an abstract class that contains one
// abstract (pure virtual) function named evaluate, which must be implemented by all its subclasses.

class Expression {
public: 
    virtual double evaluate() = 0;
};