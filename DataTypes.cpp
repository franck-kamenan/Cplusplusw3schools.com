#include <iostream>
using namespace std;

int main()
{
	int myNum = 5;
	cout << myNum << "\n";
	float myFloatNum = 5.99;
	cout << myFloatNum << "\n";
	double myDoubleNum = 9.98;
	cout << myDoubleNum << "\n";
	char myLetter = 'D';
	cout << myLetter << "\n";
	string myText = "Hello";
	cout << myText << "\n";
	bool myBoolean = true; // Outputs 1 if true.
	cout << myBoolean << "\n";
	bool myFalseBoolean = false; // Outputs 0 if false.
	cout << myFalseBoolean << "\n";
	cout << "\n";

	// Scientific numbers.
	float f1 = 35e3;
	cout << f1 << "\n";
	double d1 = 12E4;
	cout << d1 << "\n";
	cout << "\n";

	// Display variables in combination with text.
	int myAge = 35;
	cout << "I am " << myAge << " years old. \n";
	cout << "\n";

	// Add variables together.
	int x = 5;
	int y = 6;
	int sum = x + y;
	cout << sum << "\n";
	cout << "\n";

	// Declare multiple variables of the same type on the same line.
	int a = 5, b = 6, c = 7;
	cout << a + b + c << "\n";
	char d = 65, e = 66, f = 67; // ASCII values.
	cout << d << "\n";
	cout << e << "\n";
	cout << f << "\n";
	cout << "\n";

	// Identifiers.
	int minutesPerHour = 60;
	cout << minutesPerHour << "\n";
	cout << "\n";

	return 0;
}