#include<stdio.h>

int main()
{
    FILE *fp;
    char song[30];
    int i;

    fp = fopen("playlist.txt","w");

    for(i=1; i<=3; i++)
    {
        printf("Enter Song %d: ", i);
        scanf(" %[^\n]", song);

        fprintf(fp,"%s\n", song);
    }

    fclose(fp);

    printf("Songs Saved Successfully!");

    return 0;
}
