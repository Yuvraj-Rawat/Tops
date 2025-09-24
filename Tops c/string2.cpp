#include<stdio.h>
#include<string.h>

int main()
{
	
//	char name[50];
//	printf("Enter name: ");
//	scanf("%d",name);		// this return string but as u press space and write another word 
//	printf("Name is: %s",name);			// it doesnot print it.
	
	char full[50];
	printf("Enter the full name: ");
	fgets(full,50,stdin);
	puts(full);
	return 0;
}
