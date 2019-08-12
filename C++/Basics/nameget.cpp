#include <iostream>
using namespace std;

int main(void)
{
    char name[10];
    cout << "Enter your name: ";    
    cin.get(name, 10, '\n');
    cout << "Hello " << name << endl;

    return 0;
}

