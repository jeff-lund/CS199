#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    char str1[] = "pear";
    char str2[strlen(str1) + 1];
    strcpy(str2, str1);
    for(int i = 4; i < 10; ++i)
        str2[i] = 'x';
    char temp[] = "pork belly tacos";
    cout << str2 << endl;

    /*
    if(str1 == str2)
        cout << "Yup" << endl;
    else
        cout << "Nope" << endl;
    *//*
    char c;
    cin >> c;
    while(c != 'z')
        cout << ++c << endl;
    return 0;
    */
}
