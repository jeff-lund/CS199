#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
    char filename[100];
    char buffer[500];
    char rd_wr;
    ifstream fin;
    ofstream fout;

    cout << "Read or write? (r/w) ";
    cin >> rd_wr;
    cin.ignore(100, '\n');

    cout << "Enter a file name: ";
    cin >> filename;
    cin.ignore(100, '\n');

    if(rd_wr == 'r')
    {
        fin.open(filename);
        fin.get(buffer, 500, '\n');
        fin.ignore();
        while(!fin.eof())
        {
            cout << "Read in: " << buffer << endl;
            fin.get(buffer, 500, '\n');
            fin.ignore();
        }
        fin.close();
    }
    else if(rd_wr == 'w')
    {
        fout.open(filename);
        cout << "Enter a phrase to write to the file: ";
        cin.get(buffer, 500, '\n');
        fout << buffer << endl;
        fout.close();
    }

    return 0;
}
