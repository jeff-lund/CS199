/* ********************************
* Jeff Lund                       *
* CS199 - Intro to Programming 2  *
* basic hello world program       *
******************************** */

#include <iostream> 

void foo()
{
    std::cout << "Hello" << std::endl;
}
int main(void) 
{ 
    using namespace std;
    foo();
    cout << "Hello, World!" << endl; 
    return 0;
}
