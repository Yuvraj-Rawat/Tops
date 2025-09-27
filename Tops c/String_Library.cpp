#include<stdio.h>
#include<string.h>

int main()
{
	char name[] = "Yuvraj";
	int length = strlen(name);
	printf("Length is : %d\n",length);
	
	char old[] = "Hello";
	char neww[50];
	strcpy(neww,old);
	puts(neww);
	
	char first[50] = "Hello ";
	char second[] = "World";
	strcat(first,second);
	puts(first);
	
	char str[] = "apple";
	char str2[] = "fpple";
	printf("Ans is : %d",strcmp(str,str2));
	
	char reverse[50];
	printf("\nEnter String: ");
	gets(reverse);
	
	strrev(reverse);
	printf("Reversed string is : %s\n",reverse);
	
	return 0 ;
}
