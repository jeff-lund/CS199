#include <iostream>
#include "list.h"
using namespace std;

int main(void)
{
    linked_list l;
    for(int i = 10; i < 100; i += 10)
    {
        //l.add_front(i);
        //l.insert_second(i);
        l.insert_behind_tail(i);
        l.display();
    }
    l.display_last();
    cout << "Alternating sequence: ";
    l.display_alternating();
    return 0;
}
