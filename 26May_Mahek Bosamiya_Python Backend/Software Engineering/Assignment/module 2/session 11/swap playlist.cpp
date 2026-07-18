#include<stdio.h>

void swapPlaylistCounts(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int playlist1, playlist2;

    printf("Enter songs in Playlist 1: ");
    scanf("%d",&playlist1);

    printf("Enter songs in Playlist 2: ");
    scanf("%d",&playlist2);

    swapPlaylistCounts(&playlist1, &playlist2);

    printf("\nAfter Swapping:\n");
    printf("Playlist 1 = %d\n", playlist1);
    printf("Playlist 2 = %d\n", playlist2);

    return 0;
}

