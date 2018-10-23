//Ethan Deming
//10-22-2018
//CS 2030 Fall 2018

#include <stack>
#include <string>
#include <iostream>
#include <list>
#include <vector>
#include "Lab05MyStack.cpp"

using namespace std;

string stringReversal1(string input)
{
    stack<char> stack1;

    for(int i = 0; i < input.length(); i++)
    {
        stack1.push(input.at(i));
    }

    string output;

    while(stack1.empty() == false)
    {
        output.push_back(stack1.top());
        stack1.pop();
    }

    return output;
}

string stringReversal2(string input)
{
    vector<char> vector1;

    for(int i = 0; i < input.length(); i++)
    {
        vector1.push_back(input.at(i));
    }

    string output;

    while(vector1.empty()==false)
    {
        output.push_back(vector1.back());
        vector1.pop_back();
    }

    return output;
}

string stringReversal3(string input)
{
    list<char> list1;

    for(int i = 0; i < input.length(); i++)
    {
        list1.push_back(input.at(i));
    }

    string output;

    while(list1.empty()==false)
    {
        output.push_back(list1.back());
        list1.pop_back();
    }

    return output;
}

string stringReversal4(string input)
{
    MyStack MyStack1;

    for(int i = 0; i < input.length(); i++)
    {
        MyStack1.push_back(input.at(i));
    }

    string output;

    while(MyStack1.isEmpty()==false)
    {
        output.push_back(MyStack1.pull());
    }

    return output;
}

int main()
{
    cout << stringReversal1("backwards") << endl;

    cout << stringReversal2("reverse") << endl;

    cout << stringReversal3("wrong way") << endl;

    cout << stringReversal4("not right") << endl;
}
