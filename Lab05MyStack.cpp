//Ethan Deming
//10-22-2018
//CS 2030 Fall 2018

#include "Lab05MyStack.h"

    MyStack::MyStack()
    {

    }

    bool MyStack::isEmpty() const
    {
        bool isEmpty = vector1.empty();
        return isEmpty;
    }

    void MyStack::push_back(char& c)
    {
        vector1.push_back(c);
    }

    char MyStack::pull()
    {
        char output = vector1.back();
        vector1.pop_back();
        return output;
    }
