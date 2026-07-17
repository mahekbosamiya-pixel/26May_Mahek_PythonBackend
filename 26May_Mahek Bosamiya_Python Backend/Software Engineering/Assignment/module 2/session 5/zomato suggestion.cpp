#include<stdio.h>
main()
{
   int choice;
   printf("\nWelcome to meal suggestion bot!");
   printf("\nChoose your meal type: ");
   printf("\n1. Breakfast");
   printf("\n2. Lunch");
   printf("\n3. Snack");
   printf("\n4. Dinner");
   
   printf("\nEnter your choice: ");
   scanf("%d",&choice);
   
   switch(choice)
   {
   	case 1:
   		printf("\nPoha, Uttapa, Oats");
   		break;
   	case 2:
   	    printf("\nDaal-Chawaal, dal-dhokli, Pulav");
   	    break;
   	case 3:
   	    printf("\nChana, Aaloo chat, Wafers ");
   	    break;
   	case 4:
   		printf("\nAaloo paratha, Sabji-Roti, Biryani");
   		break;
   	default:
   		printf("\nInvalid choice");
   }

}
