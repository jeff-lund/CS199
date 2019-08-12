#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    while(cin.fail())
    {
        cout << "Fail state detected! Please enter a number: ";
        cin.clear();
        cin.ignore(100, '\n');
        cin >> n;

    }

    if(n < 10)
        cout << "Your number is small and puny." << endl;
    else
        cout << "Your number is mighty!" << endl;

    return 0;
}
