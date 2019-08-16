#include <iostream>
#include "stack.h"
using namespace std;

Stack newstack(void)
{
  Stack s;
  s.index = -1;
  return s;
}

int push(Stack &s, int value)
{
  if(s.index == STACKSIZE)
  {
    cout << "Stack is full" << endl;
    return -1;
  }
  s.items[++s.index] = value;

  return 1;
}

int pop(Stack &s)
{
  int temp;
  if(isEmpty(s))
  {
    cout << "Stack is empty";
    return -1;
  }
  temp = s.items[s.index--];
  return temp;
}

int peek(Stack &s)
{
  int temp;
  if(isEmpty(s))
  {
    cout << "Stack is empty";
    return -1;
  }
  temp = s.items[s.index];
  return temp;
}

bool isEmpty(Stack &s)
{
  return s.index == -1;
}
