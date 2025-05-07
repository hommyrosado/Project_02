
/**
 * variableexception.h
 * CMSC 330 – Project 2
 * Name: Hommy Rosado
 * Date: 5/5/2025
 * Description: Defines exception class for variable initialization errors
 */
#ifndef VARIABLEEXCEPTION_H
#define VARIABLEEXCEPTION_H

#include <stdexcept>
#include <string>
using namespace std;

class VariableException : public runtime_error {
public:
    VariableException(const string& message) : runtime_error(message) {}
};

#endif
