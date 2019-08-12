#include <cstring>
#include <cctype>
#include <iostream>
using namespace std;

int main(void)
{
    char str1[] = "zzz";
    char str2[] = "Zbc";
    int diff;

    if(!strcmp(str1, str2))
        cout << "they are not the same" << endl;
    cout << diff << endl;
    cout << str1 << " | " << str2 << endl;
    char str3[100];
    strcpy(str3, str1);
    strcat(str3, str2);
    cout << str3 << endl;

    char a = 'a';
    char b = toupper(a);
    if(isalpha(a))
    cout << b << " | " << a << endl;
    return 0;
}
