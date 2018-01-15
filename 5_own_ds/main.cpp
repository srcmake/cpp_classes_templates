// Copyright srcmake.com 2018.
#include <iostream>
#include "srcstack.t.hpp"
using namespace std;

//////////////////////////////////////////////////////
// Our program always starts in the main function.
int main()
	{
	// Create a bool stack.
	srcstack<bool> bstack;
	bstack.push(false);
	bstack.push(false);
	bstack.push(true);
	
	// We expect to see true -> false -> false
	while(bstack.isEmpty() == false)
		{
		cout << bstack.top() << " ";
		bstack.pop();
		}
	cout << endl;
	
	// Now an integer stack.
	srcstack<int> istack;
	istack.push(5);
	istack.push(4);
	istack.push(20);
	istack.pop();
	istack.push(3);
	istack.push(2);
	istack.push(1);
	
	// We expect to see 1 2 3 4 5 
	int n = istack.size();
	for(int i = 0; i < n; i++)
		{
		cout << istack.top() << " ";
		istack.pop();
		}
	cout << endl;
	
	return 0;
	}
//////////////////////////////////////////////////////
