#include<stdio.h>

int main(){
	
	float rupee[3],sum;
	float tax,total;
	
	printf("Enter the first value: ");
	scanf("%f",&rupee[0]);
	
	printf("Enter the second value: ");
	scanf("%f",&rupee[1]);
	
	printf("Enter the third value: ");
	scanf("%f",&rupee[2]);
	
	sum = rupee[0]+rupee[1]+rupee[2];
	printf("The sum of all values is: %f\n",sum);
	
	tax = sum*18/100;
	printf("GST on it is: %f\n",tax);
	
	total = sum+tax;
	printf("total value with tax is: %f",total);
}
