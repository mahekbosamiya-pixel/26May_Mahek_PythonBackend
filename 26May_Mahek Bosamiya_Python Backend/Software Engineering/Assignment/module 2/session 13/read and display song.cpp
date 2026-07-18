#include<stdio.h>

int main()
{
    FILE *fp;
    char song[30];

    fp = fopen("playlist.txt","r");

    while(fgets(song,30,fp)!=NULL)
    {
        printf("%s", song);
    }

    fclose(fp);

    return 0;
}
