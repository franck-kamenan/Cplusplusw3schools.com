#include <iostream>
using namespace std;

int main() // Main method.
{
	try 
	{
		int age = 15;
		if (age >= 18)
		{
			cout << "Access granted." << "\n";
		}
		else
		{
			throw(age);
			// throw 505;
		}
	}
	// catch(...){}
	catch (int myNum)
	{
		cout << "Access denied." << "\n";
		cout << "Age is: " << myNum << "\n";
	}
	return 0;
}