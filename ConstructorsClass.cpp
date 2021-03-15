#include <iostream>
using namespace std;

class MyClass // Class.
{
public: // Access specifier.
	string brand;
	string model;
	int year;
	MyClass() // Constructor.
	{
		cout << "Hello World!" << "\n";
	}
	MyClass(string x, string y, int z) // Constructor.
	{
		brand = x;
		model = y;
		year = z;
	}
	MyClass(int z); // Constructor declaration inside the class.
};

MyClass::MyClass(int z) // Constructor defined outside the class with the Scope resolution operator.
{
	year = z;
}

int main() // Main method.
{
	MyClass myObject(); // Create an object of MyClass, this will call the constructor.
	MyClass mySecondObject("Mercedes", "GLE", 2020); // Create an object of MyClass, this will call the constructor.
	cout << mySecondObject.brand << " " << mySecondObject.model << " " << mySecondObject.year << "\n";
	MyClass myThirdObject(2020); // Create an object of MyClass, this will call the constructor.
	cout << myThirdObject.year << "\n";
	cout << "\n";
	return 0;
}

