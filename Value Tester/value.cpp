#include <iostream>
#include <sstream>
#include <string>
#include "value.h"

using namespace std;

/*
*	This is the number the user will insert
*	return: int
*/
int Value::inputedValue() {
	int value = 0;
	cout << "Type a value you want to calculate with." << endl;
	cin >> value;
	cout << "Your value: " << value << endl;
	return value;
}

/*
* This is the string input user requests
*
*/
string Value::inputedConstant() {
	cin.ignore();
	string constOption = "";
	getline(cin, constOption);
	return constOption;
}

/*
* This checks if the option exists.
*
*/
bool Value::checkIfConstExists(string option) {
	if (option == "v1") {
		return true;
	}
	else if (option == "v2") {
		return true;
	}
	else if (option == "v3") {
		return true;
	}
	else {
		return false;
	}
}

/*
*	This returns a value that was specified in the header
*
*/
const int Value::returnValue(string option) {
	if (option == "v1") {
		return VALUE_ONE;
	}
	else if (option == "v2") {
		return VALUE_TWO;
	}
	else if (option == "v3") {
		return VALUE_THREE;
	}
}

/*
*	sets the equation command to be used for
*	calculations
*/
void Value::takeEquationString(string command, int value, const int setValue) {
	int newValue = 0;
	bool ifCommandExists = false;

	while (!ifCommandExists) {
		if (command == "add") {
			newValue = value + setValue;
			ifCommandExists = true;
		}
		else if (command == "sub") {
			newValue = value - setValue;
			ifCommandExists = true;
		}
		else if (command == "mult") {
			newValue = value * setValue;
			ifCommandExists = true;
		}
		else if (command == "div") {
			newValue = value / setValue;
			ifCommandExists = true;
		}
		else {
			cout << "This is not a proper command!" << endl;
			break;
		}
	}
	printEquationResult(newValue);
}

void Value::printEquationResult(int value) {
	cout << "Your resulting value is: " << value << endl;
}