#include <iostream>
#include "sliding_queue1.h"
using namespace std;

int main(void)
{
  // Queue Test
  Queue q;
  newQ(q);
  for(int i = 0; i < 10; ++i)
    enqueue(q, i);
  cout << peek(q) << endl;
  cout << "Your queue contained: ";
  for(int i = 0; i < 10; ++i)
    cout << dequeue(q) << " ";
  cout << endl;
  return 0;
}
