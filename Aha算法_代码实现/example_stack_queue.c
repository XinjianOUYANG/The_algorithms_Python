#include<stdio.h>
struct queue
{
    int data[1000];
    int head;
    int tail;
};

struct stack
{
    int data[10];
    int top;
};

int main()
{
    struct queue q1,q2;
    struct stack s;
    int book[10];
    int i,t;

    // initialize stack and queues
    q1.head,q1.tail = 1,1;
    q2.head,q2.tail = 1,1;
    s.top = 0;

    for(i=1;i<=6;i++)
    {
        book[i] = 0;
    }
}

