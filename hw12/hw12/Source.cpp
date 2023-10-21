#include "Stack.h" 
#include <iostream>

/*

int main()
{
	Stack a;
	a.pop();














}



*/



int main() {
    // Create an instance of the Stack class
    Stack myStack;

    // Push some elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Get the top element
    double topElement = myStack.top();
    std::cout << "Top element: " << topElement << std::endl;

    // Check if the stack is empty
    if (myStack.empty()) {
        std::cout << "Stack is empty." << std::endl;
    }
    else {
        std::cout << "Stack is not empty." << std::endl;
    }

    // Pop elements from the stack
    myStack.pop(); // Removes 30
    myStack.pop(); // Removes 20

    // Get the new top element
    topElement = myStack.top();
    std::cout << "Top element: " << topElement << std::endl;

    // Check the size of the stack
    int stackSize = myStack.size();
    std::cout << "Stack size: " << stackSize << std::endl;

    // Swap the contents of two stacks
    Stack anotherStack;
    anotherStack.push(5);
    anotherStack.push(15);

    myStack.swap(anotherStack);

    std::cout << "Contents of myStack after swapping:" << std::endl;
    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }

    std::cout << "\nContents of anotherStack after swapping:" << std::endl;
    while (!anotherStack.empty()) {
        std::cout << anotherStack.top() << " ";
        anotherStack.pop();
    }

    return 0;
}
