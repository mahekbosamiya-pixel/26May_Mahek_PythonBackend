#include<stdio.h>
#include<string.h>

int main()
{
    char user1[20], user2[20];

    printf("Enter First Username: ");
    scanf("%s", user1);

    printf("Enter Second Username: ");
    scanf("%s", user2);

    if(strcmp(user1, user2)==0)
    {
        printf("Both usernames are same.");
    }
    else
    {
        printf("Both usernames are different.");
    }

    return 0;
}
