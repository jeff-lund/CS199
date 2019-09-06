#include <iostream>
#include <cstring>
#include "node.h"
using namespace std;

const bool MANUAL = false;

int main(void)
{
  list my_list;
  if(!MANUAL)
  {

    my_list.append(build_dog("Spark", "Golden Retriever", "Fetch"));
    my_list.display_all();

    my_list.append(build_dog("Bork", "Poodle", "Yapping"));
    my_list.display_all();

    my_list.append(build_dog("Fido", "Beagle", "Play Dead"));
    my_list.display_all();

    my_list.append(build_dog("Abelsworth", "Black Lab", "Shake"));
    my_list.display_all();

    my_list.append(build_dog("Kilo", "Pit Bull", "Cuddle"));
    my_list.append(build_dog("Farnsworth", "Black Lab", "Roll Over"));
    my_list.append(build_dog("Aardvark", "Black Lab", "Howl at the Moon"));
    my_list.append(build_dog("Jack", "Black Lab", "Lick"));
    my_list.append(build_dog("Aaalwaysfirst", "Black Lab", "Leap"));
    my_list.append(build_dog("Zebra", "Black Lab", "Fart"));
    my_list.display_all();
    cout << "Try searching for Black Lab." << endl;
    my_list.search_breed();

  }
  else
  {
    for(int i = 0; i < 5; ++i)
    {
        my_list.add(interactive_build_dog());
        my_list.display_all();
    }
    my_list.search_breed();
  }

  return 0;
}
