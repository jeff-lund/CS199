const int STACKSIZE = 1000;

struct Stack
{
  int items[STACKSIZE];
  int index;
};

Stack newstack(void);
int push(Stack&, int);
int pop(Stack&);
int peek(Stack&);
bool isEmpty(Stack&);
