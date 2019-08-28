#include "list.h"

int main(void)
{
    linked_list l;
    l.add_back(10);
    l.display();
    l.add_back(20);
    l.display();
    l.add_back(30);
    l.display();

    return 0;
}
