#include <iostream>
#include "list.h"
using namespace std;

linked_list::linked_list()
{
    node *current, *temp;
    head = new node;
    head->value = 1;
    current = head;
    temp = new node;
    temp->value = 2;
    current->next = temp;
    current = temp;
    temp = new node;
    temp->value = 3;
    temp->next = NULL;
    current->next = temp;
}

void linked_list::display()
{
    node * current;
    current = head;
    while(current)
    {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

