#include<stdio.h>

int main()
{
    int guess;

    printf("Songs List:\n");
    printf("1. Believer\n");
    printf("2. Perfect\n");
    printf("3. Shape of You\n");

    do
    {
        printf("\nGuess the song number (1-3): ");
        scanf("%d",&guess);

        if(guess==2)
        {
            printf("Correct!\n");
        }
        else
        {
            printf("Wrong! Try Again.\n");
        }

    }while(guess!=2);

    return 0;
}
