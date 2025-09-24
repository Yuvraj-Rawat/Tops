// count how many vowels and consonants are their in user enter words.

#include<stdio.h>
#include<string.h>

int main()
{
	char word[100];
	int vowels=0, consonants=0;
	
	printf("Enter the word: ");
	fgets(word,100,stdin);

	for(int i=0; word[i]!='\0'; i++)
	{
		char ch = word[i];
		
		// check if alphabet only
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		{
			// check vowels
			if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
			{
				vowels++;
			}
			else{
				consonants++;
			}
		}
	}
	printf("Total number of vowels in this word is: %d\n",vowels);
	printf("Total number of consonant in this  word is: %d\n",consonants);
	
	return 0;
}

