#include<stdio.h>
// Fibonacci series using while loop
int main(){
	int i=1,j,k=0,l=1,sum;
	printf("Enter the number of terms: ");
	scanf("%d",&j);
	
	while(i<=j){
		printf("%d\n",k);
		sum=k+l;
		k=l;
		l=sum;
		i++;
	}
}
