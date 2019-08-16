#include <iostream>
//#include "stack.h"
#include "sliding_queue.h"

using namespace std;

int main(void)
{
  /*
  // Stack Test
  Stack s = newstack();
  push(s, 4);
  push(s, 5);
  push(s, 6);

  cout << pop(s) << endl;
  cout << peek(s) << endl;
  cout << pop(s) << pop(s) << pop(s) << endl;
  */

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
