//
// Created by LFH on 2024/1/3.
//


#ifndef AWESOME_MYQUEUE_H
#define AWESOME_MYQUEUE_H

#include <stack>

class Myqueue {
private:
    std::stack<int> stackIn;
    std::stack<int> stackOut;
public:
    void push(int value);
    int pop();
    int size();
    int peek();
    bool empty();

};


#endif //AWESOME_MYQUEUE_H
