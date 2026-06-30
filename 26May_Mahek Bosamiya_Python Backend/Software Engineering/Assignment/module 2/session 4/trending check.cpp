//famous check
#include<stdio.h>
main()
{
	int like,comment,share;
	
	printf("Check if your post is trending!");
	
	printf("\nEnter your like:");
	scanf("%d",&like);
	
	printf("\nEnter your comment:");
	scanf("%d",&comment);
	
	printf("\nEnter your share:");
	scanf("%d",&share);
	
	if(like>=1000 || comment>=200 && share>=50)
	{
		printf("\nYour post is trending!");
	}
	else
	{
		printf("\nYour post is not trending!");
	}
}
