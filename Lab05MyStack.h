//Ethan Deming
//10-22-2018
//CS 2030 Fall 2018

#ifndef LAB05MYSTACK_H
#define LAB05MYSTACK_H

#include <vector>

using namespace std;

class MyStack
{
    vector<char> vector1;

    public:
        MyStack();
        bool isEmpty() const;
        void push_back(char& c);
        char pull();

    protected:

    private:
};

#endif // LAB05MYSTACK_H
