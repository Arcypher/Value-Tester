#include <iostream>
#include "value.h"

using namespace std;

/*
*	Date: 06/20/2018
*	Author: John Kim
*	Purpose: Calculate a user's values with the constant values presented.
*	This will be able to do the basic levels of arithmatic.
*/

int main() {
	Value valueObj;
	bool hasQuit = false;
	cout << "Hello! This is a program to calculate " <<
		" values with user inputs and constant values!" << endl;
	
	//have user commands to use a value, and quit the program
	while (!hasQuit) {
		char command;
		cout << "Type in \"c\" to calculate, or press \"q\" to quit." << endl;
		cin >> command;
		if (command == 'c') {
			int value = valueObj.inputedValue();

			//next, user will input what constant they will use.
			cout << "Now, choose what constant you want to use: " <<
				"VALUE_ONE (type v1), VALUE_TWO (type v2), or VALUE_THREE (type v3)" << endl;
			string option = valueObj.inputedConstant();
			bool doesExist = valueObj.checkIfConstExists(option);
			
			if (!doesExist) {
				cout << "This constant doesn't exist!" << endl;
			}
			else {
				string operatorString = "";
				const int VALUE_NUM = valueObj.returnValue(option);
				// << "The constant exists!" << endl; //checks when statement is false
				//int newResult = value + valueObj.returnValue(option); //newResult is the inputed value and (currently) the chosen option
				//cout << newResult << endl;
				cout << "Select a command to calculate with: Addition (add), Subtract (sub), Multiply (mult), Divide (div)." << endl;
				cin >> operatorString;
				valueObj.takeEquationString(operatorString, value, VALUE_NUM);
			}
		}
		else if (command == 'q') {
			hasQuit = true;
			cout << "Good-bye" << endl;
		}
		else {
			cout << "Please enter a valid command!" << endl;
		}
	}

	system("pause");
	return 0;
} //main