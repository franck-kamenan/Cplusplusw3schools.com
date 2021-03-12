#include <iostream>
using namespace std;

int main()
{
	int z;
	// Insertion operator <<.
	cout << "Type a number: ";
	// Extraction operator >>.
	cin >> z;
	cout << "Your number is: " << z << "\n";
	cout << "\n";

	// Simple calculator.
	int x, y;
	int sum;
	cout << "Type a number: ";
	cin >> x;
	cout << "Type a number: ";
	cin >> y;
	sum = x + y;
	cout << "The sum is: " << sum << "\n";
	cout << "\n";

	return 0;
}