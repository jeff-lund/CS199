#include <iostream>
#include "dog.h"
using namespace std;

int main(void)
{
    dog *ptr = new dog;
    cout << "Enter your dog's name: ";
    cin.get((*ptr).name, 20, '\n');
       
    return 0;
}
