#include <iostream>
using namespace std;

const int SIZE = 100;

int main(void)
{
    char phrase[SIZE];
    int n, m;
    cout << "Enter a number: ";
    cin >> n;
    cin >> m;
    cin.ignore(100,'\n');
    cout << "Enter a phrase: ";
    cin.get(phrase, SIZE, '\n');
    cout << "You entered: " << n << " and " << phrase << endl;
    return 0;

}
