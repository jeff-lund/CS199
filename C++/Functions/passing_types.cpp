#include <iostream>
using namespace std;

void foo(int& x)
{
    x = x * x;
    return;
}

int bar(int x)
{
    x = x * x;
    return x;
}

void spam(int &a, int &b)
{
    a += 5;
    b -= 5;
}
int main(void)
{
    int x = 10;
    int y;
    
    cout << "Pass by value" << endl;
    cout << "Original value of x = " << x << endl;
    y = bar(x);
    cout << "Value of y = "  << y << endl;
    cout << "Value of x = " << x << endl;
    
    cout << "Pass by reference" << endl;
    cout << "original value of x = " << x << endl;
    foo(x);
    cout << "New value of x = ";
    cout << x << endl << endl;
    cout << "Original values: " << x << " " << y << endl; 
    spam(x, y);
    cout << "new values: " << x << " " << y << endl;

    return 0;
}
