//
// Created by LFH on 2024/1/3.
//

#include <iostream>
#include "Myqueue.h"

void::Myqueue::push(int value)
{
    stackIn.push(value);
}
int::Myqueue::pop()
{
    if(stackOut.empty()) {
        while (!stackIn.empty())
        {
            stackOut.push(stackIn.top());
            stackIn.pop();
        }
    }
    int result = stackOut.top();
    stackOut.pop();
    return result;

}
int::Myqueue::peek()
{
    int res = this->pop();
    stackOut.push(res);
    return res;
}

bool::Myqueue::empty()
{
    return stackIn.empty() && stackOut.empty();
}


int main()
{

    Myqueue *queue = new Myqueue();


    queue->push(1);
    std::cout << queue->peek() << std::endl;
    queue->push(2);
    std::cout << queue->peek() << std::endl;

    queue->push(3);
    std::cout << queue->peek() << std::endl;

    queue->push(4);
    std::cout << queue->peek() << std::endl;



    delete queue;

}
