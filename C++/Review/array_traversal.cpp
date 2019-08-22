#include <iostream>
#include <cstring>

using namespace std;

void pre_traversal(char*);
void post_traversal(char*);

int main(void)
{
    char phrase[] = "What is the difference?";
    pre_traversal(phrase);
    post_traversal(phrase);
    return 0;
}

void pre_traversal(char phrase[])
{
    int i = 0;
    int length = strlen(phrase);
    while(i < length)
        cout << phrase[++i] << ", ";
    cout << endl;
}
void post_traversal(char phrase[])
{
    int i = 0;
    int length = strlen(phrase);
    while(i < length)
        cout << phrase[i++] << ", ";
    cout << endl;
}
