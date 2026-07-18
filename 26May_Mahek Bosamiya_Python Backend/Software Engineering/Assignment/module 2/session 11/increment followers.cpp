#include<stdio.h>

void incrementFollowers(int *followers, int n)
{
    int i;

    for(i=0; i<n; i++)
    {
        *followers = *followers + 100;
        followers++;
    }
}

int main()
{
    int followers[5];
    int i;

    for(i=0; i<5; i++)
    {
        printf("Enter Followers of Friend %d: ", i+1);
        scanf("%d",&followers[i]);
    }

    incrementFollowers(followers,5);

    printf("\nUpdated Followers:\n");

    for(i=0; i<5; i++)
    {
        printf("%d\n", followers[i]);
    }

    return 0;
}
