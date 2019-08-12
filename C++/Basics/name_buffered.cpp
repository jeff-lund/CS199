/******************************************************
* Jeff Lund                                           *
* CS162                                               *
* Strings and a buffer to check what's left over in   *
* the buffer.                                         *
* What happens if you enter in first/last name?       *
******************************************************/

#include <iostream>
using namespace std;

int main(void) {
    char name[10];
    char buffer[100];
    
    cout << "enter your name: ";
    cin >> name;
    cout << "Hello " << name << endl;
    
    cin.get(buffer, 100, '\n');
    cout << "Remaining in the buffer" << endl << buffer << endl;

    return 0;
}
