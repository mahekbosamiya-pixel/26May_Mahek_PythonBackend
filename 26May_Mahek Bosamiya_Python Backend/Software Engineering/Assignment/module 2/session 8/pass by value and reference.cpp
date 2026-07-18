#include<stdio.h>

void increaseFollowersByValue(int followers)
{
    followers = followers + 1000;
    printf("Inside Value Function = %d\n",followers);
}

void increaseFollowersByReference(int *followers)
{
    *followers = *followers + 1000;
    printf("Inside Reference Function = %d\n",*followers);
}

int main()
{
    int followers;

    printf("Enter Followers: ");
    scanf("%d",&followers);

    increaseFollowersByValue(followers);

    printf("After Value Function = %d\n",followers);

    increaseFollowersByReference(&followers);

    printf("After Reference Function = %d\n",followers);

    return 0;
}
