# include<stdio.h>
// Fibonacci series using for loop
int main(){
	int i,j,k=0,l=1,sum;
	printf("Enter the number of terms: ");
	scanf("%d",&j);

	for(i=1;i<=j;i++){
		printf("%d\n",k);
		sum = k+l;
		k=l;
		l=sum;
	}
}
