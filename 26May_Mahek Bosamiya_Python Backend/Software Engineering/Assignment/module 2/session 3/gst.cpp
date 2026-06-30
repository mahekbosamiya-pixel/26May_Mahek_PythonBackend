#include<stdio.h>
main()
{
	int price=1800;
	const int gst=18;
	float totalprice;
	
	totalprice= ((price/100)*gst)+price;
	
	printf("welcome to zomato");
	printf("\namount of bill before gst:%d",price);
	printf("\nGST Rate:%d",gst);
	printf("\nAmount of bill after adding GST:%f",totalprice);
}
