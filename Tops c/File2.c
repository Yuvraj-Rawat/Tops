#include<stdio.h>

int main()
{
	FILE *fptr;
	fptr = fopen("1atest.txt","r");
	
	char ch;
	fscanf(fptr,"%c",&ch);
	printf("%c",ch);
	fscanf(fptr,"%c",&ch);
	printf("%c",ch);
	fscanf(fptr,"%c",&ch);
	printf("%c",ch);
	
	fclose(fptr);
}
