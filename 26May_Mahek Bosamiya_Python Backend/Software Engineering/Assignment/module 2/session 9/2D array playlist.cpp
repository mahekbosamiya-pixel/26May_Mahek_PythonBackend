#include<stdio.h>

int main()
{
    int playlistRatings[3][5];
    int i, j;

    for(i=0; i<3; i++)
    {
        printf("Enter ratings for Playlist %d:\n", i+1);

        for(j=0; j<5; j++)
        {
            scanf("%d",&playlistRatings[i][j]);
        }
    }

    printf("\nRatings of Second Playlist:\n");

    for(j=0; j<5; j++)
    {
        printf("%d ", playlistRatings[1][j]);
    }

    return 0;
}
