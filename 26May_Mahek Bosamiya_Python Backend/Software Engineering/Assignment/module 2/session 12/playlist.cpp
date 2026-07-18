#include<stdio.h>

struct Playlist
{
    char title[30];
    char artist[30];
    int duration;
};

int main()
{
    struct Playlist song = {"Perfect", "Ed Sheeran", 263};

    printf("Title : %s\n", song.title);
    printf("Artist : %s\n", song.artist);
    printf("Duration : %d Seconds\n", song.duration);

    return 0;
}
