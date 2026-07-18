#include<stdio.h>
#include<string.h>

int main()
{
    int choice = 0;
    char team[50];

    while(choice != 3)
    {
        printf("\n===== MENU =====\n");
        printf("1. View Favorite IPL Teams\n");
        printf("2. Add New Team\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("\nFavorite Teams:\n");
            printf("1. Chennai Super Kings\n");
            printf("2. Mumbai Indians\n");
            printf("3. Royal Challengers Bengaluru\n");
        }
        else if(choice == 2)
        {
            printf("Enter Team Name: ");
            scanf(" %[^\n]", team);

            printf("%s added successfully.\n", team);
        }
        else if(choice == 3)
        {
            printf("Thank You!\n");
        }
        else
        {
            printf("Invalid Choice\n");
        }
    }

    return 0;
}
