#include<stdio.h>
#include<string.h>
int main()
{
	
	//string
	char name[] = "Yuvraj Rawat";
	char name1[] = {'Y','u','v','r','a','j','\0'};
	
	//printf("Char is : %c\n",name[0]);
	//printf("Char is : %s",name1);
	
	// loop
	for(int i = 0;name[i]!='\0';i++)
	{
		printf("%c",name[i]);
	}
	return 0;
}
