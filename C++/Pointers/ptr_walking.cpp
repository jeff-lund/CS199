#include <iostream>
using namespace std;

int main()
{
    char word[] = "Appletree";
    char *ptr;
    ptr = word;
    while(*ptr++ != 'e')
    {
        ++*ptr++;
    }
    cout << ptr << endl;
    cout << word << endl;

}
