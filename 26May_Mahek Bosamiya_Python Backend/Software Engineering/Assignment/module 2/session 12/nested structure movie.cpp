#include<stdio.h>

struct Time
{
    int hours;
    int minutes;
};

struct MovieShow
{
    char movie[30];
    int screen;
    struct Time time;
};

int main()
{
    struct MovieShow show = {"Avengers", 2, {7, 30}};

    printf("Movie : %s\n", show.movie);
    printf("Screen : %d\n", show.screen);
    printf("Time : %02d:%02d\n", show.time.hours, show.time.minutes);

    return 0;
}
