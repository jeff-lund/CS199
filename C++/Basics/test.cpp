#include <iostream>
#include <cstring>
using namespace std;

const int BLUE = 0;
const int GREEN = 1;
    
int main(void)
{
    char name[] = "Gilgamesh";
    char n2[100];
    char c;
    cin >> c;
    c = cin.get();
    cin.get(c);
    cin.get(n2, 100, 'a');
    cout << n2 << endl;

    name[12] = '\0';
    name[10] = 'ab';

    return 0;
}

