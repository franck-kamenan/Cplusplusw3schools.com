#include <iostream>
using namespace std;

class Employee // Class.
{
private: // Private access specifier.
	int salary;

public: // Public access specifier.
	void setSalary(int s) // Setter.
	{
		salary = s;
	}
	int getSalary() // Getter.
	{
		return salary;
	}
};

int main() // Main method.
{
	Employee myEmployee;
	myEmployee.setSalary(50000);
	cout << myEmployee.getSalary() << "\n";
	cout << "\n";
	return 0;
}