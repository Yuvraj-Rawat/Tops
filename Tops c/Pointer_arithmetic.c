#include<stdio.h>

int main()
{
	
	int age = 21;
	int *ptr = &age;
	
	printf("value of Ptr : %d\n",ptr);
	ptr++;
	printf("value of Ptr : %d\n",ptr);
	ptr--;
	printf("value of Ptr : %d\n",ptr);	
}
