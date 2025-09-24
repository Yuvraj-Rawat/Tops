#include<stdio.h>

int main()
{
	float month;
	float year;
	
	printf("enter the months: ");
	scanf("%f",&month);
	
	year = month/12;
	
	printf("years is: %f",year);
}
