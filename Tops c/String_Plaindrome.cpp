#include<stdio.h>
#include<string.h>

int main()
{
	char word[50];
	int length, start, end, ispalindrome = 1;
	
	printf("enter the word: ");
	gets(word);
	
	length = strlen(word);
	start = 0;
	end = length-1;
	
	while(start<end)
	{
		if(word[start] != word[end])
		{
			ispalindrome = 0;
			break;
		}
		start++;
		end--;
	}
	
	if(ispalindrome)
	{
		printf("The string is plaindrome");
	}
	else
	{
		printf("The string is not plaindrome");
	}
	return 0;
}
