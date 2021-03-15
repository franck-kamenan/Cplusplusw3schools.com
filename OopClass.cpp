#include <iostream>
using namespace std;

class MyClass // Class.
{
public: // Access specifier.
	int myNum; // Attribute.
	string myString; // Attribute.
};

int main() // Main method.
{
	MyClass myObject; // Create an object of MyClass
	myObject.myNum = 15; // Access attributes and set values.
	myObject.myString = "Some text."; // Access attributes and set values.
	cout << myObject.myNum << "\n";
	cout << myObject.myString << "\n";
	cout << "\n";

	MyClass mySecondObject; // Create an object of MyClass
	mySecondObject.myNum = 12; // Access attributes and set values.
	mySecondObject.myString = "The text."; // Access attributes and set values.
	cout << mySecondObject.myNum << "\n";
	cout << mySecondObject.myString << "\n";
	cout << "\n";
	return 0;
}

