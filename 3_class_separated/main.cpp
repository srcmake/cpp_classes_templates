// Copyright srcmake.com 2018.
#include <iostream>
#include "MyMathLibrary.h"
using namespace std;

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
