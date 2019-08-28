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
        current = head;
        while(current->next != NULL)
        {
            current = current->next;
        }
        current->next = temp;
        temp->next = NULL;
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

// In Class Problems
void linked_list::display_last(void)
{
    node * current;

    // check for empty list
    if(!head)
    {
      cout << "List is empty, no nodes to display" << endl;
      return;
    }

    current = head;
    // Traverse to the last node in the list
    while(current->next != NULL)
    {
      current = current->next;
    }
    // Print out value of last node
    cout << "Last node's value: " << current->value << endl;
}

void linked_list::display_alternating(void)
{
  node * current;
  bool print = true;

  // check for empty list
  if(!head)
  {
    cout << "List is empty, no nodes to display" << endl;
    return;
  }
  // traverse nodes, alternating value of print flag to print every other node
  current = head;
  while(current)
  {
    if(print)
    {
      cout << current->value << " ";
    }
    // swap print flag boolean value (!true -> false, !false -> true)
    print = !print;
    current = current->next;
  }
  cout << endl;
}

void linked_list::insert_second(int n)
{
  node *temp;

  // if the list is empty insert at the head
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
    // link temp to the head's next element
    temp->next = head->next;
    // move heads next pointer to new node
    head->next = temp;
  }
}

void linked_list::insert_behind_tail(int n)
{
  node *temp, *current, *behind;

  // if the list is empty insert at the head
  if(!head)
  {
    head = new node;
    head->value = n;
    head->next = NULL;
  }
  else
  {
    // create new node
    temp = new node;
    temp->value = n;
    // if the head is the only node in the list
    // we will replace the head because the head is the tail
    if(head->next == NULL)
    {
      temp->next = head;
      head = temp;
    }
    // If there is more than one node in the list we traverse
    // to the end of the list dragging a pointer behind us to leave a marker
    // of the node that will point to temp
    // behind -> temp -> current
    else
    {
      current = head;
      behind = current;
      while(current->next)
      {
        behind = current;
        current = current->next;
      }
      // Does the order of these statements matter?
      behind->next = temp;
      temp->next = current;
    }
  }
}
