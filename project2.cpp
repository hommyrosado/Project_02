/**
 * project2.cpp
 * CMSC 330 – Advanced Programming
 * Name: Hommy Rosado
 * WEEK 08: PROJECT 2
 * Date: 5/5/2025
 * Description: C++ Application Expression Parser
 */

// This file contains the main function for the project 2 skeleton. It reads an input file named input.txt
// that contains one statement that includes an expression following by a sequence of variable assignments.
// It parses each statement and then evaluates it.

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "symboltable.h"
#include "variableexception.h"
#include "parse.h"

SymbolTable symbolTable;

void parseAssignments(stringstream& in);

int main() {
	const int SIZE = 256;
	Expression* expression;
    char paren, comma, line[SIZE];
 
	ifstream fin;
	fin = ifstream("input.txt");
	if (!(fin.is_open())) {
		cout << "File did not open" << endl;
		system("pause");
		return 1;
	}
	while (true) {
        fin.getline(line, SIZE);
		if (!fin)
			break;
		stringstream in(line, ios_base::in); 
		in >> paren;
		cout << line << " ";
		try {
			expression = SubExpression::parse(in);
			in >> comma;
			parseAssignments(in);
			double result = expression->evaluate();
			cout << "Value = " << result << endl;
        } catch (VariableException& e) {
            cerr << "Error: " << e.what() << endl;
        }
		}
		catch (string message) {
			cout << message << endl;
		}
	}
	system("pause");
	return 0;
}

void parseAssignments(stringstream& in) {
	char assignop, delimiter;
    string variable;
    int value;
    do {
        variable = parseName(in);
        in >> ws >> assignop >> value >> delimiter;
        symbolTable.insert(variable, value);
    }
    while (delimiter == ',');
}
   
