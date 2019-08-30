#include <iostream>
using namespace std;

void digits(long n)
{
    // Why is this the base case?
    if(n < 10)
    {
        cout << n << " ";
        return;
    }
    // What happens if we use the print here instead of below
    //cout << n % 10 << " ";
    digits(n / 10);
    cout << n % 10 << " ";
}

int main(void)
{
    long n = 123456789;

    digits(n);
    cout << endl;

    return 0;
}
