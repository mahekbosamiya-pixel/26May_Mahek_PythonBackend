#include<stdio.h>
main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	
	if(age >= 25)
	{
	printf("\nYou are eligible to get driving license!");
	printf("\nYou are eligible to get credit card!");
	printf("\nYou are eligible to get car rental!");
	}
	else if(age >= 21)
	{
	printf("\nYou are eligible to get driving license!");
	printf("\nYou are eligible to get credit card!");
    } 
	else if(age >= 18)
	{
		printf("\nYou are eligible to get driving license!");
	}

}
