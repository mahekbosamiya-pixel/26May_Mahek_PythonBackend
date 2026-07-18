#include<stdio.h>

void capitalize(char name[])
{
    if(name[0] >= 'a' && name[0] <= 'z')
    {
        name[0] = name[0] - 32;
    }

    printf("%s\n", name);
}

int main()
{
    char product[20];
    char user[20];

    printf("Enter Product Name: ");
    scanf("%s", product);

    printf("Enter User Name: ");
    scanf("%s", user);

    printf("\nOutput:\n");

    capitalize(product);
    capitalize(user);

    return 0;
}
