#include <iostream>
#include <cstring>
using namespace std;

const int SMSIZE = 20;
const int SIZE = 100;
const int LGSIZE = 500;

struct movie
{
    char title[SIZE];
    char description[LGSIZE];
    char rating[SMSIZE];
    char genre[SIZE];
};

void read_all(movie&);
void display_all(movie&);
int correct(void);

int main(void)
{
    int n_movies = 0;
    movie my_movies[SIZE];
    do
    {
        read_all(my_movies[n_movies]);
        display_all(my_movies[n_movies]);
    } while(!correct());
}

void read_all(movie & m)
{
    // prompt the user and read in data for each of the parameters
    cout << "What is the title of the movie: ";
    cin.get(m.title, SIZE, '\n');
    cin.ignore();

    cout << "Enter a description of the movie: ";
    cin.get(m.description, LGSIZE, '\n');
    cin.ignore();

    cout << "Enter the rating for the move (G, PG, PG13, R): ";
    cin.get(m.rating, SMSIZE, '\n');
    cin.ignore();

    cout << "Enter the genre of the movie: ";
    cin.get(m.genre, SIZE, '\n');
    cin.ignore();
}

void display_all(movie & m)
{
    // pretty print all of the params
    cout << "Title: " << m.title << endl;
    cout << m.description << endl;
    cout << "Rating: " << m.rating << endl;
    cout << "Genre: " << m.genre << endl;
}

int correct(void)
{
    char c;
    cout << "Is this correct (y/n)? ";
    cin >> c;
    cin.ignore(100, '\n');

    return c == 'y';
}
