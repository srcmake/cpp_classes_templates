#include <iostream>
using namespace std;

// Declare a template that uses variable type T. (T could be int, double, etc.)
template<typename T>
// The same add function, but use variable type T.
T Add(T a, T b)
	{
	cout << "T addition of " << a << " and " << b << ": "; 
	return a + b;
	}

int main()
	{
	cout << Add(5, 5) << endl;
	cout << Add(5.5, 5.5) << endl;
	cout << Add((long)5, (long)5) << endl;
	
	return 0;
	}
