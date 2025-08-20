#include<stdio.h>

int main(){
	int i=1,j,k=0,l=1,sum;
	
	printf("Enter the number of terms: ");
	scanf("%d",&j);
	
	do{
		printf("%d\n",k);
		sum=k+l;
		k=l;
		l=sum;
		i++;
	}while(i<=j);
}
