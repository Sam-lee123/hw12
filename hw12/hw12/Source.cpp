#include <iostream>
#include "Queue.h"
#include "Stack.h"

int main() {
    // Testing the Queue class
    Queue queue;

    std::cout << "Testing the Queue class:" << std::endl;

    // Pushing elements into the queue
    queue.push(1.0);
    queue.push(2.0);
    queue.push(3.0);

    std::cout << "Queue size: " << queue.size() << std::endl;
    std::cout << "Front element: " << queue.front() << std::endl;
    std::cout << "Back element: " << queue.back() << std::endl;

    // Popping elements from the queue
    queue.pop();
    std::cout << "Popped one element. New front element: " << queue.front() << std::endl;
    std::cout << "Queue size: " << queue.size() << std::endl;

    // Testing the Stack class
    Stack stack;

    std::cout << "\nTesting the Stack class:" << std::endl;

    // Pushing elements onto the stack
    stack.push(10.0);
    stack.push(20.0);
    stack.push(30.0);

    std::cout << "Stack size: " << stack.size() << std::endl;
    std::cout << "Top element: " << stack.top() << std::endl;

    // Popping elements from the stack
    stack.pop();
    std::cout << "Popped one element. New top element: " << stack.top() << std::endl;
    std::cout << "Stack size: " << stack.size() << std::endl;

    return 0;
}
