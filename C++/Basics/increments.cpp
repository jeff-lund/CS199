/******************************************************
* Jeff Lund
* CS162
* Examples of the increment operator
******************************************************/

#include <iostream>
using namespace std;

int main(void) {
    // Prefix vs Postfix example
    int i = 0;

    //cout << ++i << endl; // prints 1
    //cout << i++ << endl; // prints 1
    //cout << i << endl;   // prints 2 
    
    char c = 'a';

    while(c <= 'z')
        cout << c++;
    cout << endl;
    
    return 0;
}
