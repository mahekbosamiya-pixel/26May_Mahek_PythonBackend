#include <iostream>
using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    bool isPublic;
    string songs[10];
    int count = 0;

    void addSong(string songTitle)
    {
        songs[count] = songTitle;
        count++;
    }

    void displaySongs()
    {
        for(int i = 0; i < count; i++)
        {
            cout << i + 1 << ". " << songs[i] << endl;
        }
    }
};

int main()
{
    Playlist p;

    p.name = "My Playlist";
    p.createdOn = "12-08-2026";
    p.isPublic = true;

    p.addSong("Perfect");
    p.addSong("Believer");
    p.addSong("Shape of You");

    cout << "Songs:" << endl;
    p.displaySongs();

    return 0;
}
