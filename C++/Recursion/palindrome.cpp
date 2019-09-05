#include <iostream>
#include <cstring>
using namespace std;

bool palindrome(char s[], int left, int right)
{
    // If we reach the middle of an odd length string or if
    // the left and right indicies pass each other then all letters matched
    // and we have a palindrome
    if(left >= right)
        return true;
    // if the letters at the left and right don't match stop checking
    else if(s[left] != s[right])
        return false;
    // If we get here the letters matched and we are not done checking
    // so make a recursive call moving the indicies in by 1
    else
        return palindrome(s, left + 1, right - 1);
    // abcbda
}

// Helper function to make calling the function look nicer
bool is_palindrome(char s[])
{
    return palindrome(s, 0, strlen(s) - 1);
}

int main(int argc, char **argv)
{
    char *str = argv[1];
    if(is_palindrome(str))
        cout << str << " is a palindrome" << endl;
    else
        cout << str << " is not a palindrome" << endl;
    return 0;
}
