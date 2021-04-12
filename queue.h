/*
Description

Using the starting code below, write the front method for a Queue class that returns the
integer at the front of the queue. If there is no data on the Queue the front method should
return 0. You need to have a working enqueue method in your Queue so please make sure you
have successfully completed the earlier assignments.

Note: The class fields are public only so the grader can check your code. In a real life
implementation these should be private.

Use this code to implement your method:

#define MAX 1000

 class Queue {
  public:
    int rear_value;
    int a[MAX]; // Maximum size of Queue
    Queue() { rear = -1; }
    bool enqueue(int x);
    int dequeue();
    int front();
    int rear();
};

Here is an example call to the function

Queue myqueue;

myqueue.enqueue(10);

printf(¡°%i¡±,myqueue.front());

After the above code executes the Queue will contain the number 10 and the front field will
contain the value 0. The number 10 will have been printed to the screen.

Function Signature

Int front();

File Name

queue.h

Score

There are three tests each worth 2 points

Note: You do not need to submit any other code including the main method or any print statements.
ONLY the Queue class is required. Otherwise, the autograder will fail and be unable to grade your
code. (I.e., do not include the above example in your code.) The above example should be used to
test your code but deleted or commented out upon submission.
*/

#include <iostream>
using namespace std;

#define MAX 1000

class Queue {
    public:
    int rear_value;
    int a[MAX]; // Maximum size of Queue
    Queue() { rear_value = -1; }
    bool enqueue(int x);
    int dequeue();
    int front();
    int rear();
};

bool Queue::enqueue(int x)
{
    if(rear_value < MAX-1)
    {
        a[rear_value+1] = x;
        rear_value++;
        return true;

    }else{
        return false;
    }
}

int Queue::front()
{
    if(rear_value <= -1 || rear_value>= MAX-1 )
    {
        return 0;
    }else{
    return a[0];}
}

int Queue::rear()
{
    if(rear_value <= -1 || rear_value>= MAX-1 )
    {
        return 0;
    }else{
    return a[rear_value];}
}


int Queue::dequeue()
{
    int return_front;
    if(rear_value <= -1 || rear_value>= MAX-1 )
    {
        return 0;
    }else{
    return_front = a[0];
    for(int i = 0;i+1<=rear_value;i++)
    {a[i] = a[i+1];}

    rear_value--;

    return return_front;}
}









