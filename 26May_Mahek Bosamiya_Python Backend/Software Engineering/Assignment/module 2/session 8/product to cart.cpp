#include<stdio.h>

void addToCart(char cart[][20], int *count)
{
    printf("Enter Product Name: ");
    scanf("%s", cart[*count]);

    (*count)++;
}

int main()
{
    char cart[10][20];
    int count=0;
    int i;

    addToCart(cart,&count);

    printf("\nProducts in Cart:\n");

    for(i=0; i<count; i++)
    {
        printf("%s\n", cart[i]);
    }

    return 0;
}
