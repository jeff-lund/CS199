#include <iostream>
#include <cstring>
#include <fstream>
#include "movies.h"
using namespace std;

int main(void)
{
  movie_list my_list;
  bool loop = true;
  int option;
  char buffer[500];

  while(loop)
  {
    cout << "1. Load an existing collection" << endl;
    cout << "2. Add a movie to your collection" << endl;
    cout << "3. Remove a movie from you collection" << endl;
    cout << "4. Display you collection" << endl;
    cout << "5. Save and quit" << endl;
    cout << "Make a selection: ";
    cin >> option;
    cin.ignore(100, '\n');

    switch (option)
    {
      case 1: my_list.load_collection();
              break;
      case 2: my_list.add();
              break;
      case 3: cout << "Enter the name of the movie you would like to remove: ";
              cin.get(buffer, 500, '\n');
              cin.ignore(100, '\n');
              my_list.remove_title(buffer);
              break;
      case 4: my_list.display();
              break;
      case 5: my_list.store_collection();
              loop = false;
              break;
      default: cout << "Invalid selection, try again." << endl;
               break;
    }
  }
}
