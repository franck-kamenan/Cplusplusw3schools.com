#include <iostream>
using namespace std;

class MyClass // Class.
{
public: // Access specifier.
	int myNum; // Attribute.
	string myString; // Attribute.
	void myMethod() // Method/function defined inside the class.
	{
		cout << "Hello World!" << "\n";
	}
	void mySecondMethod(); // Method/function declaration inside the class.
	int mySecondMethod(int maxSpeed, int maxWeight); // Method/function declaration inside the class.
};

// Scope resolution operator.
void MyClass::mySecondMethod() // Method/function defined outside the class with the Scope resolution operator.
{
	cout << "I am outside!" << "\n";
}

// With return value and parameters.
int MyClass::mySecondMethod(int maxSpeed, int maxWeight) // Method/function defined outside the class with the Scope resolution operator.
{
	return maxSpeed + maxWeight;
}

int main() // Main method.
{
	MyClass myObject; // Create an object of MyClass
	myObject.myNum = 15; // Access attributes and set values.
	myObject.myString = "Some text."; // Access attributes and set values.
	myObject.myMethod(); // Call the method.
	myObject.mySecondMethod(); // Call the method.
	cout << myObject.myNum << "\n";
	cout << myObject.myString << "\n";
	cout << myObject.mySecondMethod(200, 100) << "\n"; // Call the method.
	cout << "\n";
	return 0;
}

