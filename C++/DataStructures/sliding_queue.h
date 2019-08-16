const int QUEUESIZE = 1000;

struct Queue
{
    int items[QUEUESIZE];
    int front;
    int back;
};

void newQ(Queue&);
void enqueue(Queue&, int val);
int dequeue(Queue&);
bool isEmpty(Queue&);
void resetQueue(Queue&);
int peek(Queue&);
