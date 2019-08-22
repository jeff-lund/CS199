#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void upper(char arr[])
{
    int length = strlen(arr);
    for(int i = 0; i < length; ++i)
        arr[i] = toupper(arr[i]);
}

int main(void)
{
    char buffer[500];
    cout << "Enter a phrase: ";
    cin.get(buffer, 500, '\n');
    cout << "Original: " << buffer << endl;
    upper(buffer);
    cout << "SHOUTING: " << buffer << endl;
    return 0;
}
