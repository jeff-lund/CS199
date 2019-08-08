#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for(int i = 0, j = 10; i < j; ++i, --j)
    {
        cout << i << " | " << j << endl;
    } 
    return 0;
}
