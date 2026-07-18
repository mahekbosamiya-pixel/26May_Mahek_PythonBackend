#include<stdio.h>

void formatPrice(int price)
{
    printf("Price: $%d\n",price);
}

int main()
{
    int p1,p2,p3;

    printf("Enter Price 1: ");
    scanf("%d",&p1);

    printf("Enter Price 2: ");
    scanf("%d",&p2);

    printf("Enter Price 3: ");
    scanf("%d",&p3);

    formatPrice(p1);
    formatPrice(p2);
    formatPrice(p3);

    return 0;
}
