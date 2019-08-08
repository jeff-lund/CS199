// Convert inches to mm
#include <iostream>
using namespace std;

const double MM_TO_INCH = 25.4;

int main(void)
{
    double inch, millimeter;
    cout << "Enter the number of inches: ";
    cin >> inch;
    millimeter = inch * MM_TO_INCH;
    cout << inch << " inches is " 
         << millimeter << " millimeters." 
         << endl;

    return 0;
}
