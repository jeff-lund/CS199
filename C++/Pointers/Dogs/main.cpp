#include <iostream>
#include "dog.h"
using namespace std;

int main(void)
{
    dog pebbles("Pebbles", "Black Lab", "fetch");
    dog moose("Moose", "Bernese Mountain Dog", "roll over");
    dog *frank;
    frank = new dog;

    pebbles.set_friend(&moose);
    pebbles.display();
    moose.display();

    frank.read();
    frank->set_friend(&pebbles);
    moose.set_friend(frank);

    pebbles.display();
    moose.display();
    frank->display();

    //delete frank;
    return 0;
}
