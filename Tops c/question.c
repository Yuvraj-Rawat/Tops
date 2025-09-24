//100 unit = 200 rs
//300 unit = 800 rs
//up to 300 = 1000 rs

#include<stdio.h>

int main()
{
	int unit,i;
	printf("Enter the unit used: ");
	scanf("%d",&unit);
	
	if(unit<=100){
		printf("Your electricity bill is: 200");
	}
	else if(unit<=300){
		printf("Your electricity bill is: 800");
	}
	else if(unit>300){
		printf("Your electricity bill is: 1000");
	}
}
