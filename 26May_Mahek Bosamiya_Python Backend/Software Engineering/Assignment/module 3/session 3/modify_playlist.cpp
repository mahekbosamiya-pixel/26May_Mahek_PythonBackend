#include <iostream>
#include <fstream>
using namespace std;

class Playlist
{
public:
    string name;

    Playlist()
    {
        name = "My Favourites";
        cout << "Playlist created." << endl;
    }

    ~Playlist()
    {
        ofstream file("autosave.txt");

        file << "Playlist Name: " << name << endl;

        file.close();

        cout << "Playlist automatically saved." << endl;
    }
};

int main()
{
    Playlist p;

    cout << "Playlist Name: " << p.name << endl;

    return 0;
}
