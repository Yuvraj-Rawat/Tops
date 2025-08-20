#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Enter value of a\n");
	scanf("%d",&a);
	printf("Enter value of b\n");
	scanf("%d",&b); 
	printf("Enter value of c\n");
	scanf("%d",&c);
	
	if(a>b && a>c){
		printf("a is greater");
	}
	else if(b>a && b>c){
		printf("b is greater");
	}
	else{
		printf("c is greater");
	}
}
