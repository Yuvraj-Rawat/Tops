#include<stdio.h>

int main(){
	int a,i,sum=0,sum2=0,count,count2;
	printf("Enter the number: ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		
		if(i%2==0){
			sum2 = sum2+i;
			count2++;
		}
		else{
			sum = sum+i;
			count++;
		}
	}
	printf("Total even number is: %d\n",count2);
	printf("The sum of even number is: %d\n",sum2);
	printf("Total odd no is: %d\n",count);
	printf("The sum of odd number is: %d",sum);
}
