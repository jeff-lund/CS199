// Sum the digits of a number
// 123 => 1 + 2 + 3 = 6

#include <iostream>
using namespace std;

long adder(long n)
{
    if(n < 10)
        return n;
    return n % 10 + adder(n / 10);
}

int main(void)
{
    long n, sum;

    cout << "Enter a number: ";
    cin >> n;

    sum = adder(n);
    cout << "The digits of " << n << " sum to " << sum << endl;
    return 0;
}
