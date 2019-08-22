#include <iostream>
#include <cstring>
#include "dog.h"
using namespace std;

dog::dog()
{
    name = NULL;
    breed = NULL;
    trick = NULL;
    best_friend = NULL;
}

dog::dog(const char *n, const char *b, const char *t)
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);
    breed = new char[strlen(b) + 1];
    strcpy(breed, b);
    trick = new char[strlen(t) + 1];
    strcpy(trick, t);
    best_friend = NULL;
}

void dog::display()
{
    cout << name << " is a " << breed << " who can perform " << trick << "." << endl;
    if(best_friend)
    {
        cout << name << "'s best friend is " << best_friend->name << "." << endl;
    }
    else
    {
        cout << name << " has no friend and is very lonely." << endl;
    }
}

void dog::read()
{
    char buffer[500];

    cout << "What is your dog's name: ";
    cin.get(buffer, 500, '\n');
    cin.ignore(100, '\n');
    name = new char[strlen(buffer) + 1];
    strcpy(name, buffer);

    cout << "What is the breed of " << name << ": ";
    cin.get(buffer, 500, '\n');
    cin.ignore(100, '\n');
    breed = new char[strlen(buffer) + 1];
    strcpy(breed, buffer);

    cout << "What trick can " << name << " perform: ";
    cin.get(buffer, 500, '\n');
    cin.ignore(100, '\n');
    trick = new char[strlen(buffer) + 1];
    strcpy(trick, buffer);
}

void dog::set_friend(dog *d)
{
    best_friend = d;
}
