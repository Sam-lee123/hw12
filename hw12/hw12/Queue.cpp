#include "Queue.h"

Queue::Queue()
    : d()
{
    //nothing here
}

Queue::Queue(const Queue& rhs)
    : d(rhs.d)
{
    //nothing here
}

Queue& Queue::operator=(const Queue& rhs)
{
    // TODO: insert return statement here
    d = rhs.d;
    return *this;
}

double Queue::back()
{
    return d.back();
}

double Queue::front()
{
    return d.front();
}

bool Queue::empty()
{
    return d.empty();
}

void Queue::pop()
{
    d.pop_front();
}

void Queue::push(double value)
{
    d.push_back(value);
}

int Queue::size()
{
    return d.size();
}

void Queue::swap(Queue& rhs)
{
    std::swap(d, rhs.d);
}
