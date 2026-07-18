#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char song[50];

    fp = fopen("playlist.txt","r");

    printf("Songs containing 'love':\n");

    while(fgets(song,50,fp)!=NULL)
    {
        if(strstr(song,"love") != NULL)
        {
            printf("%s", song);
        }
    }

    fclose(fp);

    return 0;
}
