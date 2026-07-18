#include<stdio.h>

int main()
{
    int dailySteps[7];
    int i;

    for(i=0; i<7; i++)
    {
        printf("Enter steps for day %d: ", i+1);
        scanf("%d",&dailySteps[i]);
    }

    printf("\nDaily Steps:\n");

    for(i=0; i<7; i++)
    {
        printf("%d\n", dailySteps[i]);
    }

    return 0;
}
