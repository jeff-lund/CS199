#include <iostream>
using namespace std;

int main(void)
{
    char buffer[100];
    cin.width(100);
    cin >> buffer;
    cin.ignore(100, '\n');
    cout << "With width: " << buffer << endl;
    cin.get(buffer, 100, '\n');
    cout << "With get: " << buffer << endl;

    return 0;
}
