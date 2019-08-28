#include <iostream>
#include "list.h"
using namespace std;

linked_list::linked_list()
{
    head = NULL;
}

void linked_list::add_front(int n)
{
    node * temp;
    if(!head)
    {
        head = new node;
        head->value = n;
        head->next = NULL;
    }
    else
    {
        temp = new node;
        temp->value = n;
        temp->next = head;
        head = temp;
    }
}

void linked_list::add_back(int n)
{
    node *temp, *current;
    if(!head)
    {
        head = new node;
        head->value = n;
        head->next = NULL;
    }
    else
    {
        temp = new node;
        temp->value = n;
        temp->next = NULL;
        current = head;
        while(current)
        {
            current = current->next;
        }
        current->next = temp;
    }
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
