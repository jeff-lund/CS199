#include <iostream>
using namespace std;

void strange(void)
{
    char ch;
    cin.get(ch);
    if(!cin.eof() && ch != '\n')
    {
        strange();
        cout << ch;
    }
}

int main(void)
{
    cout << "Please enter a string: ";
    strange();
    cout << endl;

    return 0;
}
