
#pragma once
#include <deque>


// Develop your own custom C++ Stack class
class Queue
{
public:
	// Default constructor
	Queue();


	// Copy constructorfee
	Queue(const Queue& rhs);


	// Copy assignment operator
	Queue& operator =(const Queue& rhs);


	// The "others"
	double back();
	double front();
	bool empty();
	void pop();
	void push(double value);
	int size();
	void swap(Queue& rhs);

private:
	// Uses a std: :deque of type double under the hood
	std:: deque<double> d;

















};
