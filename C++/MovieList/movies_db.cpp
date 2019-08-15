/*************************************
* Jeff Lund
* CS199
* Movie Manager w/struct
*************************************/

#include <iostream>
#include <cstring>
using namespace std;

const int SMSIZE = 20;
const int SIZE = 100;
const int LGSIZE = 500;
const int STARS = 20;

struct movie
{
    char title[SIZE];
    char description[LGSIZE];
    char rating[SMSIZE];
    char genre[SIZE];
};

void read_movie(movie&);
void display_movie(movie&);
void display_all(movie*, int);
int correct(void);
void starprint(int);

int main(void)
{
    int nmovies = 0;
    movie my_movies[SIZE];
    char loop = 'y';
    while(loop == 'y')
    {
      do
      {
          read_movie(my_movies[nmovies]);
          display_movie(my_movies[nmovies]);
      } while(!correct());
      ++nmovies;
      cout << "Add another movies (y/n)? ";
      cin >> loop;
      cin.ignore(100, '\n');
    }
    cout << "Your current movies" << endl;
    starprint(STARS);
    display_all(my_movies, nmovies);
}

void read_movie(movie & m)
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

void display_movie(movie & m)
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

void display_all(movie movies[], int n)
{
  for(int i = 0; i < n; ++i)
  {
    display_movie(movies[i]);
    starprint(STARS);
  }
}

void starprint(int n)
{
  for(int i = 0; i < n; ++i)
    cout << '*';
  cout << endl;
}
