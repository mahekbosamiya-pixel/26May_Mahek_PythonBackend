#include <stdio.h>

int main()
{
    int followerCount,FollowerCount;
    printf("Enter value:");
    scanf("%d",&followerCount);
    

    printf("Initial Follower Count = %d\n", followerCount);

    // Post-increment
    printf("\nUsing Post-Increment (followerCount++)\n");
    printf("Value returned = %d\n", followerCount++);
    printf("Follower Count after increment = %d\n", followerCount);

    
    printf("Enter a value:");
    scanf("%d",&FollowerCount);

    // Pre-increment
    printf("\nUsing Pre-Increment (++FollowerCount)\n");
    printf("Value returned = %d\n", ++FollowerCount);
    printf("Follower Count after increment = %d\n", FollowerCount);

    return 0;
}
