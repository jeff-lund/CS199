#include <iostream>
using namespace std;

long long fib(long long n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main(void)
{
    long long n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The " << n  << "th fibonacci number is " << fib(n) << endl;

    return 0;
}
