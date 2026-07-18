#include<stdio.h>

struct FoodItem
{
    char itemName[30];
    float price;
    float rating;
};

int main()
{
    int i;

    struct FoodItem food[3] =
    {
        {"Pizza", 299, 4.5},
        {"Burger", 149, 4.2},
        {"Pasta", 199, 4.4}
    };

    for(i=0; i<3; i++)
    {
        printf("\nFood Item %d\n", i+1);
        printf("Name : %s\n", food[i].itemName);
        printf("Price : %.2f\n", food[i].price);
        printf("Rating : %.1f\n", food[i].rating);
    }

    return 0;
}
