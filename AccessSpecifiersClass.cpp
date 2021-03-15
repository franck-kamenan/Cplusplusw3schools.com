#include <iostream>
using namespace std;

class MyClass // Class.
{
	int year; // Default private access specifier if not specified.
public: // Public access specifier.
	string brand;
private: // Private access specifier.
	string model;
};

int main() // Main method.
{
	MyClass myObject; // Create an object of MyClass, this will call the constructor.
	myObject.brand = "Mercedes"; // Allowed(public).
	MyClass mySecondObject;
	//mySecondObject.model = "GLE"; // Not allowed(private).
	MyClass myThirdObject;
	//myThirdObject.year = 2020; // Not allowed(private).
	cout << myObject.brand << "\n";
	//cout << mySecondObject.model << "\n";
	cout << "\n";
	return 0;
}

