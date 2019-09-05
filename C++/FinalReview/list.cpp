#include <iostream>
#include "list.h"
using namespace std;

linked_list::linked_list()
{
    head = NULL;
}

linked_list::~linked_list()
{
    node *temp;
    while(head)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
}

void linked_list::reverse(void)
{
    int length = count();
    int val;
    node *tail, *current;
    current = head;
    tail = current;
    // set up tail pointer
    while(current)
    {
        tail = current;
        current = current->next;
    }
    for(int i = 0; i < length; ++i)
    {
        current = head;
        head = head->next;
        tail->next = current;
        current->next = NULL;
        tail = current;
    }   
}

void linked_list::insert_eo(int n)
{
    if(n % 2 == 0)
        insert_even(n);
    else
        insert_odd(n);
}

void linked_list::insert_even(int n)
{
    node *temp, *previous, *current;
   
    if(!head)
    {
        head = new node;
        head->next = NULL;
        head->value = n;
    }
    else if(head->value % 2 == 1)
    {
        // only odd numbers in list
        temp = new node;
        temp->next = head;
        temp->value = n;
        head = temp;
    }
    else
    {
        // traverse even list until we reach the end of the list
        // or the beginning of the odd list
        current = head->next;
        previous = head;
        while(current && current->value % 2 == 0)
        {
            previous = current;
            current = current->next;
        }
        temp = new node;
        temp->value = n;
        temp->next = current;
        previous->next = temp;
    }
}

void linked_list::insert_odd(int n)
{
    add_back(n);
}

void linked_list::remove_three(void)
{
    node *current, *previous, *temp;
    /*
    if(!head)
    {
        cout << "List is empty" << endl;
        return;
    }
  
    while(head && head->value % 3 == 0)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
    if(!head)
        return;
    current = head->next;
    previous = head;
    while(current)
    {
        if(current->value % 3 == 0)
        {
            temp = current;
            previous->next = current->next;
            current = current->next;
            delete temp;
        }
        else
        {
            // node not divisible by three
            previous = current;
            current = current->next;
        }
    }
    */
    current = head;
    while(current)
    {
        if(current->value % 3 == 0)
        {
            temp = current;
            current = current->next;
            remove(temp->value);
        }
        else
            current = current->next;
    }
}

int linked_list::count(void)
{
    node * current = head;
    int n = 0;
    while(current)
    {
        ++n;
        current = current->next;
    }

    return n;
}

void linked_list::insert_middle(int n)
{
    node *current, *temp;
    current = head;
    int length;
    if(!head)
    {
        head = new node;
        head->value = n;
        head->next = NULL;
        return;
    }
    else
    {
        length = count();
        length /= 2;
        --length;
        temp = new node;
        temp->value = n;
        for(int i = 0; i < length; ++i)
            current = current->next;
        temp->next = current->next;
        current->next = temp;
    }
}   

void linked_list::remove_rec(int n)
{
    remove_r(&head, n);
}
void linked_list::remove_r(node **head, int n)
{
    node *temp;
    if(!(*head))
    {
        cout << "Not found" << endl;
        return;
    }
    if((*head)->value == n)
    {
        temp = *head;
        cout << head << " | " << *head << endl;
        *head = (*head)->next;
        delete temp;
    }
    else
    {
        cout << "Next call on: &(*head)->next: " << &(*head)->next 
             << " | head->next: " << (*head)->next << endl;
        remove_r(&((*head)->next), n);
    }
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
        //temp = new node;
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
      behind = head;
      current = head->next;
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

void linked_list::add_sorted(int n)
{
    node * temp, * current;
    if(!head)
    {
        head = new node;
        head->value = n;
        head->next = NULL;
    }
    else if(head->value > n)
    {
        add_front(n);
    }
    else
    {
        temp = new node;
        temp->value = n;
        current = head;
        while(current->next && current->next->value < n)
        {
            current = current->next;
        }
        temp->next = current->next;
        current->next = temp;
    }
}

void linked_list::remove(int n)
{
    node * temp, *current, *previous;

    if(!head)
    {
        cout << "List is empty" << endl; 
        return;
    }
    else if(head->value == n)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        current = head->next;
        previous = head;
        while(current && current->value != n)
        {
            previous = current;
            current = current->next;
        } 
        if(current)
        {
            previous->next = current->next;
            delete current;
        }
        else
            cout << "Value not found" << endl;
    }
}
