#include<stdio.h>

float average(int amount[])
{
    int i, sum=0;

    for(i=0; i<7; i++)
    {
        sum = sum + amount[i];
    }

    return sum/7.0;
}

int main()
{
    int amount[7];
    int i;

    for(i=0; i<7; i++)
    {
        printf("Enter order amount for day %d: ", i+1);
        scanf("%d",&amount[i]);
    }

    printf("Average Spend = %.2f", average(amount));

    return 0;
}
