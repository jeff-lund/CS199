#include "list.h"

int main(void)
{
    linked_list l;
    for(int i = 10; i < 100; i += 10)
    {
        //l.add_front(i);
        l.add_back(i);
        l.display();
    }

    return 0;
}
