#ifndef VALUE
#define VALUE

#include <string>

using std::string;

class Value {
	public:
		int inputedValue();									//User inputed value
		string inputedConstant();							//string related to the constant
		bool checkIfConstExists(string);					//checks to see if the user inputed string exists
		const int returnValue(string);						//returns a const value
		void takeEquationString(string, int , const int);	//helper function of returnEquationResult
		void printEquationResult(int);						//returns the value of the selected equation
	private:
		const int VALUE_ONE = 12;
		const int VALUE_TWO = 4;
		const int VALUE_THREE = 7;
};

#endif