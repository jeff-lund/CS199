/***************************************
* Jeff Lund
* CS162
* Switch statement example
* What is wrong with me?
***************************************/

#include <iostream>
using namespace std;

int main(void){
    int count;
    cout << "Please enter the number of asterisks: ";
    cin >> count;
    switch (count) {
        case -1:
        case 10:
        case 0:
        case 1: cout << "*" << endl;
                break;
        case 2: cout << "**" << endl;
                break;
        case 3: cout << "***" << endl;
                break;
        case 4: cout << "****" << endl;
                break;
        default: cout << "!";
                 break;
    }
    cout << endl;

    return 0;
}
