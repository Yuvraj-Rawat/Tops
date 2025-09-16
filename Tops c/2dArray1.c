// Transpose of 2d Array  1st Method.

#include<stdio.h>

int main()
{
	int l,k;
	printf("Enter the row of an Array:");
	scanf("%d",&l);
	printf("Enter the column of an Array:");
	scanf("%d",&k);
	int marks[l][k],i,j;
	
	for(i=0;i<l;i++)
	{	
		for(j=0;j<k;j++)
		{
			printf("Enter the value for [%d][%d]: ",i,j);
			scanf("%d",&marks[i][j]);	
		}
	}		
	printf("\nMatrix Element:\n");
	for(i=0;i<l;i++)
	{
		for(j=0;j<k;j++)
		{
			printf("%d ",marks[i][j]);
		}
		printf("\n");
	}
	
	printf("\nTranspose Elements:\n");
	for(i=0;i<k;i++)
	{
		for(j=0;j<l;j++)
		{
			printf("%d ",marks[j][i]);
		}
		printf("\n");
	}	
	return 0;
}
