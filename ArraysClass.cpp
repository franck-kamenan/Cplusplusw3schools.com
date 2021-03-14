#include <iostream>
using namespace std;

int main()
{
	string cars[4] = { "GLE", "GLC", "CLA", "SLK" };
	cout << cars[0] << "\n";
	cars[0] = "X6";
	cout << cars[0] << "\n";
	int myNum[3] = { 10, 20, 30 };
	cout << myNum[0] << "\n";
	cout << "\n";

	string voiture[] = { "X4", "X5", "X6" };
	cout << voiture[0] << "\n";
	cout << "\n";

	// With for loop.
	for (int i = 0; i < 4; i++)
	{
		cout << cars[i] << "\n";
	}
	cout << "\n";
	return 0;
}