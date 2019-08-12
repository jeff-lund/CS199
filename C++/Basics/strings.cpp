#include <iostream>
using namespace std;

int main(void)
{
    char word[] = "apple";
    char word2[] = {'a', 'b', 'c', 'd', 'e'};
    for(int i = 0; i < 10; ++i)
        word2[i] = 's';
    cout << word << endl;
    cout << word2 << endl;

    return 0;
}
