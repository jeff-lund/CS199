#include <iostream>
#include <cstring>
using namespace std;

const int SMSIZE = 20;
const int SIZE = 100;
const int LGSIZE = 500;

void read_all(char*, char*, char*, char*);
void display_all(char*, char*, char*, char*);
int correct(void);

int main(void)
{
    char title[SIZE];
    char description[LGSIZE];
    char rating[SMSIZE];
    char genre[SIZE];

    do
    {
        read_all(title, description, rating, genre);
        display_all(title, description, rating, genre);

    } while(!correct());
}

void read_all(char title[], char description[], char rating[], char genre[])
{
    // prompt the user and read in data for each of the parameters
}

void display_all(char title[], char description[], char rating[], char genre[])
{
    // pretty print all of the params
}

int correct(void)
{
    char c;
    cout << "Is this correct (y/n)? ";
    cin >> c;
    cin.ignore(100, '\n');

    return c == 'y';
}
