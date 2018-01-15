// Copyright srcmake.com 2018.
// "Templated code shouldn't be in a .cpp file. Put them in an hpp file."
#include <iostream>
#include <vector>
using namespace std;

//////////////////////////////////////////////////////
// A class for our stack.
template<class T> 
class srcstack
	{
	private:
		vector<T> stack; // This vector holds our stack items.
	public:
		int size();		// The size of our stack.
		void push(T); 	// Add an item to the end of T. 
		void pop(); 	// Remove the item.
		T top(); 		// Get the item that's on top of the stack.
		bool isEmpty();	// Check if the stack is empty.
	};

// Return the size of our stack.
template<class T>
int srcstack<T>::size()
	{
	return stack.size();
	}

// Add an item to the stack.
template<class T>
void srcstack<T>::push(T item)
	{
	stack.push_back(item);
	}

// Remove the top item from the stack.
template<class T>
void srcstack<T>::pop()
	{
	if(isEmpty() == false)
		{
		stack.pop_back();
		}
	}
	
// Get the top item from the stack...
template<class T>
T srcstack<T>::top()
	{
	if(isEmpty() == false)
		{ return stack[stack.size()-1]; }
	}

// Is the stack empty?
template<class T>
bool srcstack<T>::isEmpty()
	{
	// If the stack size is 0 then return true. Otherwise we have items so return false.
	return size() == 0 ? true : false;
	}


//////////////////////////////////////////////////////
