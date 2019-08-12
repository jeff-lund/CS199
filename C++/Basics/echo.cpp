#include <iostream>
using namespace std;

const int SIZE = 100;

int main(void)
{
    char phrase[SIZE];
    cout << "Enter a phrase: ";
    cin.get(phrase, SIZE, '\n');
    cout << "You entered: " << phrase << endl;
    return 0;
}   
