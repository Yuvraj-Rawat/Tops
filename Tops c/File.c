#include<stdio.h>

int main()
{
	FILE *fptr;
	fptr = fopen("1atest.txt","r");
	
	if(fptr==NULL)
	{
		printf("File is not available");
	}	
	else
	{
		fclose(fptr);
	}
	return 0;
}
