#include <iostream>
#include <cstring>
#include <fstream>
#include "movies.h"
using namespace std;

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

void starprint(int n)
{
  for(int i = 0; i < n; ++i)
    cout << '*';
  cout << endl;
}

void movie_list::load_collection()
{
    char filename[100];
    ifstream loader;
    int starting_movies = num_movies;
    cout << "enter the file name: ";
    cin >> filename;
    cin.ignore(100, '\n');
    loader.open(filename);
    if(!loader)
    {
      cout << RED << "Failed to open file" << RESET << endl;
      return;
    }
    loader.get(my_movies[num_movies].title, SIZE, '\t');
    loader.ignore(100, '\t');
    while(!loader.eof())
    {
        loader.get(my_movies[num_movies].description, LGSIZE, '\t');
        loader.ignore(100, '\t');

        loader.get(my_movies[num_movies].rating, SMSIZE, '\t');
        loader.ignore(100, '\t');

        loader.get(my_movies[num_movies].genre, SIZE, '\n');
        loader.ignore(100, '\n');
        ++num_movies;
        // prime the pump
        loader.get(my_movies[num_movies].title, SIZE, '\t');
        loader.ignore(100, '\t');
    }
    loader.close();
    starting_movies = num_movies - starting_movies;
    cout << GREEN <<  "Loaded in " << starting_movies
         << " movies to your movie collection." << RESET << endl;
}

void movie_list::store_collection()
{
    ofstream fout;
    char buffer[500];

    cout << "Enter the file to save to: ";
    cin >> buffer;
    cin.ignore(100, '\n');
    fout.open(buffer);
    if(!fout)
    {
      cout << "Error in opening file " << buffer << endl;
      return;
    }
    for(int i = 0; i < num_movies; ++i)
    {
      fout << my_movies[i].title << '\t'
           << my_movies[i].description << '\t'
           << my_movies[i].rating << '\t'
           << my_movies[i].genre << '\n';
    }
    return;
}

movie_list::movie_list()
{
  num_movies = 0;
}

movie_list::~movie_list()
{
  return;
}

void movie_list::add()
{
  read_movie(my_movies[num_movies]);
  ++num_movies;
}

void movie_list::remove_title(const char* name)
{
  int index;
  bool found = false;
  for(int i = 0; i < num_movies && !found; ++i)
  {
    if(strcmp(my_movies[i].title, name) == 0)
    {
      found = true;
      index = i;
    }
  }
  if(!found)
  {
    cout << "Title not found in list" << endl;
    return;
  }
  // deallocate memory when dynamic
  for(int j = index + 1; j < num_movies; ++j, ++index)
  {
      my_movies[index] = my_movies[j];
  }
  --num_movies;
}

void movie_list::display()
{
    for(int i = 0; i < num_movies; ++i)
    {
      display_movie(my_movies[i]);
      starprint(STARS);
    }
}
