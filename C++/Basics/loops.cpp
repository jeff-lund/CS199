#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

const int SIZE = 100;

int main(void)
{
    char word[SIZE];
    int length;
    bool palindrome = true;

    cin >> word;
    length = strlen(word);
    
    for(int i = 0, j = length - 1; i < j; ++i, --j)
    {
        if(tolower(word[i]) != tolower(word[j]))
        {
            palindrome = false;
        }
    }
    
    if(palindrome)
        cout << word << " is a palindrome." << endl;
    else
        cout << word << " is not a palindrome." << endl;

    return 0;
}
