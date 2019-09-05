#include <iostream>
#include "list.h"
using namespace std;

int main(void)
{
    int arr[] = {83, 12, 100, 3, 15};
    linked_list l;
    l.display_last();

    for(int i = 0; i < 5; ++i)
    {
        //l.add_front(i);
        l.insert_second(i);
        //l.insert_behind_tail(i);
        //l.add_sorted(arr[i]);
        l.display();
    }
    l.display_last();
    cout << "Alternating sequence: ";
    l.display_alternating();
    for(int i = 0; i < 5; ++i)
        l.remove_rec(i);    
    
    return 0;
}
