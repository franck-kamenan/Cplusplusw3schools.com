#include <iostream>
using namespace std;

int main()
{
	if (20 > 18)
	{
		cout << "20 is greater than 18" << "\n";
	}

	int x = 20;
	int y = 18;
	if (x > y)
	{
		cout << "x is greater than y" << "\n";
	}
	cout << "\n";

	int time = 20;
	if (time < 18)
	{
		cout << "Good day." << "\n";
	}
	else
	{
		cout << "Good evening." << "\n";
	}
	cout << "\n";

	time = 22;
	if (time < 18)
	{
		cout << "Good day." << "\n";
	}
	else if (time < 21)
	{
		cout << "Good evening." << "\n";
	}
	else
	{
		cout << "Good night." << "\n";
	}
	cout << "\n";

	// Ternary operator.
	time = 15;
	string result = (time < 18) ? "Good day." : "Good evening.";
	cout << result << "\n";
	cout << "\n";
	return 0;
}