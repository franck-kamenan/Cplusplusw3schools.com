#include <iostream>
using namespace std;

// Base class(parent).
class Vehicle
{
public: // Public access specifier.
	string brand = "Ford";
	void honk()
	{
		cout << "Tuut, tuut!" << "\n";
	}
};

// Another base class(another parent).
class MyOtherVehicle
{
public: // Public access specifier.
	string anotherBrand = "Mercedes";
	void anotherHonk()
	{
		cout << "Another sound!" << "\n";
	}
};

// Third base class(third parent).
class ThirdVehicle
{
protected: // Protected access specifier.
	string thirdBrand;
};

// Derived class(child).
class Car: public Vehicle
{
public: // Public access specifier.
	string model = "Mustang";
};

// Another derived class(another child).
class MyOtherCar : public Vehicle, public MyOtherVehicle // Multiple Inheritance.
{
public: // Public access specifier.
	string model = "Mustang";
	string anotherModel = "GLE";
};

// Third derived class(third child).
class ThirdCar : public ThirdVehicle
{
public: // Public access specifier.
	string thirdModel = "X6";
	void setThirdBrand(string tb)
	{
		thirdBrand = tb;
	}
	string getThirdBrand()
	{
		return thirdBrand;
	}
};

// Multilevel Inheritance, derived class(grandchild).
class CarColor : public Car
{
public: // Public access specifier.
	string color = "Red";
};

int main() // Main method.
{
	Car childCar;
	childCar.honk();
	cout << childCar.brand << " " << childCar.model << "\n";
	MyOtherCar anotherChildCar;
	anotherChildCar.honk();
	anotherChildCar.anotherHonk();
	cout << anotherChildCar.brand << " " << anotherChildCar.model << "\n";
	cout << anotherChildCar.anotherBrand << " " << anotherChildCar.anotherModel << "\n";
	ThirdCar thirdChildCar;
	thirdChildCar.setThirdBrand("BMW");
	cout << thirdChildCar.getThirdBrand() << " " << thirdChildCar.thirdModel << "\n";
	CarColor grandchildCar;
	grandchildCar.honk();
	cout << grandchildCar.color << " " << grandchildCar.brand << " " << grandchildCar.model << "\n";
	cout << "\n";
	return 0;
}