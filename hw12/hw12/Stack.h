#pragma once

#include <deque>


//develop own custom stack class
class Stack
{

public:
	// default constructor
	Stack();


	// Copy constructor
	Stack(const Stack& rhs);


	// Copy assignment operator
	Stack& operator =(Stack& rhs);


	// The "others"
	bool empty();
	void pop();
	void push(double value);
	int size();
	void swap (Stack& rhs);
	double top();

private:
	// Uses a std: :deque of type double under the hood
	std::deque<double> d;




};
