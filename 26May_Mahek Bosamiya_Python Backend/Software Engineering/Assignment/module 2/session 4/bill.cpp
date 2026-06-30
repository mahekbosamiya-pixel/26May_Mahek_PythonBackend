#include<stdio.h>


void calct(int a, int b)
{
	printf("Total bill: %d", a*b);
}

main()
{
	int a,b;
	printf("Enter the price of the item:");
	scanf("%d",&a);
	
	printf("Enter number of items:");
	scanf("%d",&b);
	
	calct(a,b);
}
