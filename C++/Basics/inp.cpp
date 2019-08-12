#include <iostream>
using namespace std;
int main(void)
{
    char name[10];
    cin.width(10);
    cin >> name;
    cout << name << endl;

    cin.ignore(100, '\n');
    cin.get(name, 10, '\n');
    cout << name << endl;

    return 0;
}
