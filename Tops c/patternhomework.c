#include <stdio.h>

int main(){
	int num,i,j;
	printf("Enter the value ");
	scanf("%d",&num);
	
	for(i=num;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d",i);
		}
		printf("\n");
	}
	
//	for(i=1;i<=num;i++){
//		for(j=1;j<=i;j++){
//			printf("%d",i);
//		}
//		printf("\n");
//	}
}
