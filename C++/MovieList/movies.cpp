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
    cout << "What is the title of the movie: ";
    cin.get(title, SIZE, '\n');
    cin.ignore();

    cout << "Enter a description of the movie: ";
    cin.get(description, LGSIZE, '\n');
    cin.ignore();

    cout << "Enter the rating for the move (G, PG, PG13, R): ";
    cin.get(rating, SMSIZE, '\n');
    cin.ignore();

    cout << "Enter the genre of the movie: ";
    cin.get(genre, SIZE, '\n');
    cin.ignore();
}

void display_all(char title[], char description[], char rating[], char genre[])
{
    // pretty print all of the params
    cout << "Title: " << title << endl;
    cout << description << endl;
    cout << "Rating: " << rating << endl;
    cout << "Genre: " << genre << endl;
}

int correct(void)
{
    char c;
    cout << "Is this correct (y/n)? ";
    cin >> c;
    cin.ignore(100, '\n');

    return c == 'y';
}
