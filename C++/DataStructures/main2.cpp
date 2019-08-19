#include "stack_queue.h"
#include <iostream>
using namespace std;

int main(void)
{
    Queue q;
    newQueue(q);
    for(int i = 12; i < 3000; i *= 2)
    {
        enque(q, i);
    }
    for(int i = 0; i < 10; ++i)
        cout << deque(q) << " ";
    cout << endl;
    return 0;
}
