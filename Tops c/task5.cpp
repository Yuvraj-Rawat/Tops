#include<stdio.h>

int main()
{
	int num;
	printf("enter the num: ");
	scanf("%d",&num);
	int arr[num],i;
	
	for(i=0;i<num;i++){
		printf("Enter the value:");
		scanf("%d",&arr[i]);
	}
	printf("Even element in array is: \n");
	for(i=0;i<num;i++){
		if(arr[i]%2==0)
		{
			printf("%d\n",arr[i]);
		}
	}
	
	printf("Odd element in array is: \n");
	for(i=0;i<num;i++){
		if(arr[i]%2!=0)
		{
			printf("%d\n",arr[i]);
		}
	}
}
