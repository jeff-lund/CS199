#include <iostream>
#include "stack.h"
using namespace std;

int main(void)
{
  Stack s = newstack();
  push(s, 4);
  push(s, 5);
  push(s, 6);

  cout << pop(s) << endl;
  cout << peek(s) << endl;
  cout << pop(s) << pop(s) << pop(s) << endl;
  return 0;
}
