/*
Description

Using the started code below, write the pop method for a Stack class that returns the top integer in the stack and removes
it from the stack. If there is no data on the stack the pop method should return 0. You need to have a working push method
in your stack so please make sure you have successfully completed the earlier assignments.

Note: The class fields are public only so the grader can check your code. In a real life implementation these should be
private.

Use this code to implement your method:

#define MAX 1000

class Stack
{
  public:
  int top;
  int a[MAX]; // Maximum size of Stack
  Stack() { top = -1; }
  bool push(int x);
  int pop();
  int peek();
  bool isEmpty();
};


Here is an example call to the function

Stack mystack;

mystack.push(10);

printf(�%i�,mystack.pop());

After the above code executes the stack will be empty and the top field will contain the value -1. The number 10 will have
been printed to the screen.

Function Signature

int pop();

File Name

stack.h

Score

There are three tests each worth 2 points
*/

#include <iostream>
using namespace std;

#define MAX 1000

class Stack
{
  public:
  int top;
  int a[MAX]; // Maximum size of Stack
  Stack() { top = -1; }
  bool push(int x);
  int pop();
  int peek();
  bool isEmpty();
};

bool Stack::push(int x)
{
    if(top < MAX-1)
    {
        a[top+1] = x;
        top++;
        return true;

    }else{
        return false;
    }

}


int Stack::peek()
{
    if(top <= -1 || top>= MAX-1 )
    {
        return 0;
    }else{
    return a[top];}

}

int Stack::pop()
{
    if(top <= -1 || top>= MAX-1 )
    {
        return 0;
    }else{
    top--;
    return a[top+1];}

}

bool Stack::isEmpty()
{
    if(top <= -1 )
    {
        return 1;
    }else{
    top--;
    return 0;}

}

















