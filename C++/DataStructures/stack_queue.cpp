#include "stack_queue.h"
#include <iostream>
using namespace std;

void enque(Queue& q, int val)
{
    push(q.enq, val);
}

int deque(Queue& q)
{
    if(isDeqEmpty(q) && isEnqEmpty(q))
    {   
        cout << "Queue is empty" << endl;
        return -1;
    }
    if(!isDeqEmpty(q))
    {
        return pop(q.deq);
    }
    while(!isEnqEmpty(q))
    {
        push(q.deq, pop(q.enq));
    }
    return pop(q.deq);
}

bool isDeqEmpty(Queue& q)
{
    return isEmpty(q.deq);
}

bool isEnqEmpty(Queue& q)
{
    return isEmpty(q.enq);
}

int qpeek(Queue& q)
{
    if(isDeqEmpty(q))
    {
        if(isEnqEmpty(q))
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        while(!isEnqEmpty(q))
        {
            push(q.deq, pop(q.enq));
        }
    }
    return peek(q.deq);  
}

void newQueue(Queue& q)
{
    newstack(q.enq);
    newstack(q.deq);
}
