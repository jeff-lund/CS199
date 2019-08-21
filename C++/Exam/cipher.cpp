#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

char shiftp(char, int);
char shiftn(char, int);
void cipher(char*, char*, int);
int get_shift();

int main(void)
{
    char message[500];
    char ciphered[500];
    int shift;
    
    cout << "Enter a phrase: ";
    cin.get(message, 500, '\n');

    shift = get_shift();
    cipher(message, ciphered, shift);
    
    cout << "Original message: " << message << endl;
    cout << "Ciphered message: " << ciphered << endl;

    return 0;
}

char shiftp(char c, int n)
{
    for(int i = 0; i < n; ++i)
    {
        ++c;
        if(c > 'z')
            c = 'a';
    }

    return c;
}

char shiftn(char c, int n)
{
    for(int i = n; i < 0; ++i)
    {
        --c;
        if(c < 'a')
            c = 'z';
    }

    return c;
}

void cipher(char original[], char ciphered[], int shift)
{
    int length;
    char c;
    bool upper;

    strcpy(ciphered, original);
    length = strlen(ciphered);
    for(int i = 0; i < length; ++i)
    {
        if(isalpha(ciphered[i]))
        {
            c = tolower(ciphered[i]);
            upper = isupper(ciphered[i]);
            
            if(shift > 0)
                c = shiftp(c, shift);
            else
                c = shiftn(c, shift);
            
            if(upper)
                ciphered[i] = toupper(c);
            else
                ciphered[i] = c;
        }
    }
}

int get_shift(void)
{
    int n;
    do
    {
        cout << "Enter a shift value: ";
        cin >> n;

    } while(n == 0 || n > 25 || n < -25);
    
    return n;
}
