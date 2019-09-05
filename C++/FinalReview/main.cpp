#include <iostream>
#include "list.h"
using namespace std;

int main(void)
{
    int arr[] = {4, 6, 9, 15, 30};
    linked_list l;
    l.display_last();
   
    for(int i = 1; i < 20; ++i)
    {
        //l.add_front(i);
        //l.insert_second(i);
        //l.insert_behind_tail(i);
        l.add_sorted(i);
        //l.insert_eo(i);
        l.display();
    }
    l.display();
    cout << "reversed: " << endl;
    l.reverse();
    l.display();
    cout << l.count() << endl;
    l.display_last();
    l.remove_three();
    l.display();
}
