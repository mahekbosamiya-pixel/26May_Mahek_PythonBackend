#include<stdio.h>

void formatFollowersCount(int count)
{
    
    if(count >= 1000000)
    {
        printf("%.1fM", count / 1000000.0);
    }

    
    else if(count >= 1000)
    {
        printf("%.1fK", count / 1000.0);
    }

    
    else
    {
        printf("%d", count);
    }
}

int main()
{
    int count;

    printf("Enter Followers: ");
    scanf("%d",&count);

    formatFollowersCount(count);

    return 0;
}
