#include<stdio.h>

int main(){
	int i,num[10];
	
	for(i=0;i<10;i++){
		num[i]=9*(i+1);
		printf("%d\n",num[i]);
	}
	printf("Size of Array is: %d",sizeof(num));
}
