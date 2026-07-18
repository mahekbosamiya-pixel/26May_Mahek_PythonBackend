#include<stdio.h>
#include<string.h>

int main()
{
    char songTitle[20];

    printf("Song Title:");
    scanf("%s",songTitle);
    printf("Length = %d", strlen(songTitle));

    return 0;
}
