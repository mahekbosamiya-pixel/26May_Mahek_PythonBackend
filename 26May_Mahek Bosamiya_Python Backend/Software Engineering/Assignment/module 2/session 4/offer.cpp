#include<stdio.h>
eligibleForOffer( int age, int ordervalue)
{
	if( age>=18 && ordervalue>=500)
	{
		printf("\nYou are eligible for offer!");
	}
	else
	{
		printf("\nYou are not eligible for offer!");
	}
}

main()
{
	int age, ordervalue;
	printf("\nEnter your age:");
	scanf("%d",&age);
	
	printf("\nEnter your order value:");
	scanf("%d",&ordervalue);
	
	eligibleForOffer(age,ordervalue);
}
