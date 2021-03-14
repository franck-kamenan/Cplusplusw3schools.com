#include <iostream>
#include <string>
using namespace std;

int main()
{
	string greeting = "Hello";
	cout << greeting << "\n";
	cout << "\n";

	// String concatenation.
	string firstname = "John ";
	string lastname = "Doe";
	string fullname = firstname + lastname;
	cout << fullname << "\n";
	cout << "\n";

	// Concatenate with the append() function.
	string completename = firstname.append(lastname);
	cout << completename << "\n";
	cout << "\n";

	// String length or size.
	string text = "Is this long?";
	cout << text << "\n";
	cout << "The length of the text string is: " << text.length() << "\n";
	cout << "The length of the text string is: " << text.size() << "\n";
	cout << "\n";

	// Access strings.
	string myString = "Bye";
	cout << myString << "\n";
	cout << myString[0] << "\n";
	myString[2] = myString[1];
	myString[1] = 'o';
	cout << myString << "\n";
	cout << "\n";

	// User input strings.
	/*string name;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Your name is: " << name << "\n";
	cout << "\n";*/

	// Getline() function.
	string othername;
	cout << "Enter your other name: ";
	getline(cin, othername);
	cout << "Your other name is: " << othername << "\n";
	cout << "\n";

	// Omitting namespace.
	std::string salutation = "Salut";
	std::cout << salutation;
	cout << "\n";
	return 0;
}