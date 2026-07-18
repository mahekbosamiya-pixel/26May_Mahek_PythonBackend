#include<stdio.h>

// Function to check if a number is even
int isEven(int num)
{
    // Check whether the number is divisible by 2
    if(num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(isEven(num))
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }

    return 0;
}
