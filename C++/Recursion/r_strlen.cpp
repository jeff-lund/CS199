#include <iostream>
using namespace std;

int strlen(char *s)
{
    if(*s == '\0')
        return 0;
    else return 1 + strlen(s + 1);
}

int main(void)
{
    char buffer[100];
    int length;

    cout << "Enter a word: ";
    cin >> buffer;
    length = strlen(buffer);
    cout << "The length of " << buffer << " is " << length << endl;
    return 0;
}
