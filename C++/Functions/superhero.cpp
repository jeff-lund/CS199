#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 50;

void Cin(int &n, const char msg[], const char err[])
{
    cout << msg;
    cin >> n;
    while(cin.fail())
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << err << endl;
        cout << msg;
        cin >> n;
    }
    cin.ignore(100, '\n');
}

int main(void)
{
    char name[SIZE];
    char superhero_name[SIZE];
    char power[SIZE];
    int ranking;
    char team[SIZE];
    char loop = 'y';

    while(loop == 'y')
    {
        cout << "Enter the name of the superhero: ";
        cin.get(superhero_name, SIZE, '\n');
        cin.ignore();
        
        cout << "Enter the secret identity of the hero: ";
        cin.get(name, SIZE, '\n');
        cin.ignore();
        
        cout << "Enter the powers of " << superhero_name << ": ";
        cin.get(power, SIZE, '\n');
        cin.ignore();
        /*
        cout << "Enter the power level of " << superhero_name << ": ";
        cin >> ranking;
        while(cin.fail())
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Please enter a numeric power level (1-10)" << endl;
            cout << "Enter the power level of " << superhero_name << ": ";
            cin >> ranking;

        }
        cin.ignore(100, '\n');
        */
        Cin(ranking, "Enter the power level of the hero: ", "Please enter a numeric power level (1-10)");
        cout << "What team is " << superhero_name << " on: ";
        cin.get(team, SIZE, '\n');
        cin.ignore();
        
        // echo info
        cout << endl << endl;
        cout << "When danger strikes mild mannered " << name 
             << " becomes " << superhero_name << "!" << endl
             << "Using " << power << " to fight crime on the " 
             << team << " " << superhero_name << " is a true hero" 
             << " for our time! " << endl << superhero_name 
             << " is classified as a tier " << ranking << " hero."
             << endl << endl;
        
        cout << "Enter another hero (y/n)? ";
        
        cin >> loop;
        cin.ignore(100, '\n');
    }
    return 0;
}
