// Copyright srcmake.com 2018.
#include <iostream>
using namespace std;

//////////////////////////////////////////////////////
// A class for math operations. 
class MyMathClass
	{
	// Let's prototype the variables and functions that this class will have.
	
	private:
		int favoritenumber;
	public:
		MyMathClass();
		MyMathClass(int);
		void SetFavoriteNumber(int);
		int Add(int, int);
		
		// Let's just fill this function inside of the class itself, for fun.
		void PrintFavoriteNumber()
			{
			cout << "The favorite number is " << favoritenumber << endl;
			}
	};

// Use a constructor to set our favorite number up as 7. 
MyMathClass::MyMathClass()
	{
	SetFavoriteNumber(7);
	}
	
// Overload the constructor so that we can set it ourselves when we create the class, if we'd like to do so.
MyMathClass::MyMathClass(int fave)
	{
	SetFavoriteNumber(fave);
	}

// Our SetFavoriteNumber method can access the private variable "favoritenumber" since it's in the same class.
void MyMathClass::SetFavoriteNumber(int fave)
	{
	favoritenumber = fave;
	}

// Utility function to add two numbers.
int MyMathClass::Add(int a, int b)
	{
	return a + b;
	}
//////////////////////////////////////////////////////



//////////////////////////////////////////////////////
// Our program always starts in the main function.
int main()
	{
	// Use our Class by making an object of it.
	MyMathClass class1;
	
	// Call the class's [public] methods by invoking them from the class object that we created.
	// The default favorite number should be set to 7.
	class1.PrintFavoriteNumber();
	
	// This time, let's override the default constructor.
	MyMathClass class2(20);
	class2.PrintFavoriteNumber();
	
	int sum = class2.Add(5, 5);
	cout << "The sum of 5 and 5 is: " << sum << ".\n";

	/* Not to useful yet, but that's how you use a class. */

	return 0;
	}
//////////////////////////////////////////////////////
