#include<stdio.h>
main()
{
	int any_number;
	printf("Enter any number:");
	scanf("%d",&any_number);
	
	if any_number < 0
	{
		printf("This number is Negative");
	}
    else if any_number == 0
	{
		printf("This number is Neutral");
	}	
	else if any_number > 0
	{
		printf("This number is Positive");
	}	
}