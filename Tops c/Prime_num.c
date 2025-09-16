#include<stdio.h>

int main(){
		int i,j,n;
		printf("enter the number");
		scanf("%d",&n);
		if(i==1)
		printf("1 is special number");
		else{
			for(j=2;j<=n/2;j++){
				if(n%j==0){
					i=1;
					break;
				}
			}
		}
		if(i==0){
			printf("%d is prime no. ",n);
		}
		else
		printf("%d is not prime no. ",n);
}
