#include "stack.h"

struct Queue
{
    Stack enq;
    Stack deq;
}

void enque(Queue&, int val);
int deque(Queue&);
bool isDeqEmpty(Queue&);
bool isEnqEmpty(Queue&);
int peek(Queue&);
