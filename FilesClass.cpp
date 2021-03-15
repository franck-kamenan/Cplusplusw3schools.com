#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() // Main method.
{
	// 3 classes in the fstream librabry.
	// ofstream: Creates and writes to files.
	// ifstream: Reads from files.
	// fstream: A combination of ofstream and ifstream, it creates, writes and reads files.
	
	// Create and open a text file.
	ofstream MyFile("filename.txt");
	// Write to the file, with the insertion operator.
	MyFile << "Files can be tricky.";
	// Close the file.
	MyFile.close();
	cout << "\n";

	// Create a text string, which is used to output the text file.
	string myText;
	// Read from the text file.
	ifstream MyReadFile("filename.txt");
	// Use a while loop together with the getline() function to read the file line by line.
	while (getline(MyReadFile, myText))
	{
		// Output the text from the file.
		cout << myText << "\n";
	}
	// Close the file.
	MyReadFile.close();
	cout << "\n";
	return 0;
}