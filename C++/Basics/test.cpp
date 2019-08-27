#include <iostream>
#include <cstring>
using namespace std;

const int BLUE = 0;
const int GREEN = 1;
    
int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr = arr;
    ptr += 3.7;
    cout << *ptr << endl;
    return 0;
}
