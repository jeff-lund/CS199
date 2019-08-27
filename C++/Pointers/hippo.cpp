#include <iostream>
using namespace std;

int main() {
   char s[] = "hippopotamus";
   char *p = s;
   *p = 'x';
   *(p+2) = 'y';
   *p++ = 'b';             // Note that *p++ is *(p++) 
   (*p)++;
   while (*p++ != 't') {    
      cout << *p << endl;
   }
   *p = 'z';
   cout << s << endl;
   return 0;
}
