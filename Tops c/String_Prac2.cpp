// ask user for word the check if y char is present in it or not

#include<stdio.h>
#include<string.h>
char core(char user[]);

int main()
{
	char user[50];
	printf("Enter the word : ");
	gets(user);
	core(user);
	return 0;
}

char core(char user[])
{
	int found = 0;
	for(int i=0; user[i]!='\0'; i++)
	{
		if(user[i]=='y' || user[i]=='Y')
		{
			found = 1;
			break;
		}
	}
	if(found)
	{
		printf("Char is present in the word");
	}
	else
	{
		printf("char is not present in the word");
	}
}
