#include "dog.h"
#include <iostream>
#include <cstring>
using namespace std;

void swap(dog& a, dog& b)
{
    dog temp = a;
    a = b;
    b = temp;
    return;
}

int main(void)
{
    dog rufus, bowser;
    strcpy(rufus.name, "Rufus");
    strcpy(rufus.breed, "Black Lab");
    strcpy(rufus.trick, "Shake");

    strcpy(bowser.name, "Bowser");
    strcpy(bowser.breed, "German Shepard");
    strcpy(bowser.trick, "Play dead");

    cout << rufus.name << " " << bowser.name << endl;
    swap(rufus, bowser);
    cout << rufus.name << " " << bowser.name << endl;

    return 0;
}
