#include <iostream>
using namespace std;

// Function declaration and function overloading.
void myFunction();
void myFunction(string fname);
void myFunction(string fname, int age);
int myFunction(int x);
int myFunction(int x, int y);

// Default parameter value or optional parameter.
void mySecondFunction(string country = "Norway")
{
	cout << country << "\n";
}

// Main method.
int main()
{
	myFunction();
	myFunction("Eric");
	mySecondFunction("Nigeria");
	mySecondFunction();
	mySecondFunction("Canada");
	myFunction("Eric", 47);
	cout << myFunction(7) << "\n";
	int z = myFunction(7, 3);
	cout << z << "\n";
	cout << "\n";
	return 0;
}

// Function definition.
void myFunction()
{
	cout << "I just got executed" << "\n";
}

void myFunction(string fname)
{
	cout << fname << " Foreman" << "\n";
}

void myFunction(string fname, int age)
{
	cout << fname << " Foreman, " << age << " years old. \n";
}

// Return value.
int myFunction(int x)
{
	return 5 + x;
}

int myFunction(int x, int y)
{
	return x + y;
}

