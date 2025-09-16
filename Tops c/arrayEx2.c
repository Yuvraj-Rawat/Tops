#include<stdio.h>

int main(){
	int num;
	printf("Enter the number ");
	scanf("%d",&num);
	int i,number[num],b=0;
	
	for(i=0;i<num;i++){	
		printf("Enter the value ");
		scanf("%d",&number[i]);
	}
	
	for(i=0;i<num;i++){
		printf("%d\t\n",number[i]);
		b = b+number[i];
	}
	printf("sum of array element is: %d",b);
}
