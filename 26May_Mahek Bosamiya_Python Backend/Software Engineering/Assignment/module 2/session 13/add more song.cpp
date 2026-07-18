#include<stdio.h>

int main()
{
    FILE *fp;
    char song[30];
    int i;

    fp = fopen("playlist.txt","a");

    for(i=1; i<=2; i++)
    {
        printf("Enter Song: ");
        scanf(" %[^\n]", song);

        fprintf(fp,"%s\n", song);
    }

    fclose(fp);

    printf("Songs Added Successfully!");

    return 0;
}
