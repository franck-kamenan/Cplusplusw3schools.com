#include <iostream>
using namespace std;

int main()
{
	double x = 100 + 50;
	cout << x << "\n";
	double sum = x + 150;
	cout << sum << "\n";
	double sum2 = x + sum;
	cout << sum2 << "\n";
	cout << "\n";

	// Arithmetic operators.
	double addition = sum + sum2;
	cout << addition << "\n";
	double substraction = sum - sum2;
	cout << substraction << "\n";
	double multiplication = sum * sum2;
	cout << multiplication << "\n";
	double division = sum / sum2;
	cout << division << "\n";
	int modulus = 5 % 3;
	cout << modulus << "\n";
	double increment = ++sum;
	cout << increment << "\n";
	double decrement = --sum2;
	cout << decrement << "\n";
	cout << "\n";

	// Assignment operators.
	int z = 10;
	cout << z << "\n";
	z += 5;
	cout << z << "\n";
	z -= 3;
	cout << z << "\n";
	z *= 2;
	cout << z << "\n";
	z /= 6;
	cout << z << "\n";
	z %= 3;
	cout << z << "\n";
	cout << "\n";

	// New values
	x = 4;
	z = 5;

	// Comparison operators, returns 1 if true, returns 0 if false.
	cout << x << "\n";
	cout << z << "\n";
	cout << (x > z) << "\n";
	cout << (x < z) << "\n";
	cout << (x == z) << "\n";
	cout << (x >= z) << "\n";
	cout << (x <= z) << "\n";
	cout << (x != z) << "\n";
	cout << "\n";

	// Logical operators
	cout << x << "\n";
	cout << z << "\n";
	cout << (x > 10 && z < 10) << "\n"; // Returns 1 if both statements are true.
	cout << (x < 10 && z < 10) << "\n"; // Returns 1 if both statements are true.
	cout << (x > 10 || z < 10) << "\n"; // Returns 1 if one of the statements is true.
	cout << (x > 10 || z > 10) << "\n"; // Returns 1 if one of the statements is true.
	cout << !(x < 10 || z < 10) << "\n"; // Reverse, returns 0 if the result is true.
	cout << "\n";
	return 0;
}