#include <iostream>
using namespace std;

int calculate(int, int);
int calculate();

int main(void)
{
    int a, b, c, sum;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    sum = calculate(a, b, c);
    cout << "The sum of " 
         << a << " and " 
         << b << " is " 
         << sum << "." << endl;
    sum = calculate();
    cout << sum << endl;
    return 0;
}

int calculate(int x, int y)
{
    return x + y;
}

int calculate()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    return a + b;
}
