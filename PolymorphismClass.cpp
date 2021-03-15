#include <iostream>
using namespace std;

// Base class(parent).
class Animal
{
public: // Public access specifier.
	void animalSound()
	{
		cout << "This is an animal sound!" << "\n";
	}
};

// Derived class(child).
class Pig : public Animal
{
public: // Public access specifier.
	void animalSound()
	{
		cout << "This is an pig sound!" << "\n";
	}
};

// Derived class(child).
class Dog : public Animal
{
public: // Public access specifier.
	void animalSound()
	{
		cout << "This is an dog sound!" << "\n";
	}
};

int main() // Main method.
{
	Animal myAnimal;
	Pig myPig;
	Dog myDog;
	myAnimal.animalSound();
	myPig.animalSound();
	myDog.animalSound();
	cout << "\n";
	return 0;
}