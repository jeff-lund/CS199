#include <iostream>
using namespace std;

#include "sliding_queue.h"

void newQ(Queue &q)
{
    q.front = -1;
    q.back = -1;
}

void enqueue(Queue& q, int val)
{
    if(q.back == QUEUESIZE){
        if(q.front == 0) {
            cout << "Queue is full, enqueue rejected" << endl;
            return;
        }
        else
        {
            resetQueue(q);
        }
    }
    q.items[q.back] = val;
    ++q.back;
}

int dequeue(Queue& q)
{
    int temp;
    temp = q.items[q.front];
    ++q.front;
    if(isEmpty(q))
        resetQueue(q);
    return temp;
}

bool isEmpty(Queue& q)
{
    return q.front == q.back;
}

void resetQueue(Queue& q)
{
    if(isEmpty(q))
    {
        q.front = -1;
        q.back = -1;
    }
    else
    {
        for(int i = 0, j = q.front; i < q.back - q.front; ++i, ++j)
        {
            q.items[i] = q.items[j];
        }
    }
}

int peek(Queue& q)
{
  return q.items[q.front];
}
