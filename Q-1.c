#include<stdio.h>
main()
{
	int first_number,second_number;
	printf("Enter a value of the first number:");
	scanf("%d",&first_number);
	printf("Enter a value of the second number:");
	scanf("%d",&second_number);
	
	if(first_number<second_number)
	{
		printf("The minimum value is:%d");
	}
	else
	{
		printf("The minimum value is:%d",second_number);
	}	
}