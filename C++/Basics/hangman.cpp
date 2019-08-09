#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

const int SIZE = 100;

void replace_string(char original[], char replaced[])
{
    int length = strlen(original);
    for(int i = 0; i < length; ++i)
    {
        if(!isspace(original[i]))
        {
            replaced[i] = '_';
        }
        else
        {
            replaced[i] = original[i];
        }
    }
    replaced[length] = '\0';
    return;
}


int main(void)
{
    char og[SIZE];
    char rep[SIZE];
    cout << "Enter a phrase: ";
    cin.get(og, 100, '\n');
    replace_string(og, rep);
    cout << og << endl << rep << endl;
}
