#include<stdio.h>

int main()
{
	int num;
	printf("enter the num: ");
	scanf("%d",&num);
	int arr[num],i,len=0;
	
	for(i=1;i<=num;i++){
		printf("Enter the value:");
		scanf("%d",&arr[i]);
		len++;
	}
	printf("total length of array: %d",len);
}
