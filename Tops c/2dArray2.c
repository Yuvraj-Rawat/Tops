// Transpose of 2d Array  2nd Method.

#include<stdio.h>

int main()
{
	int l,k;
	printf("Enter the row of an Array:");
	scanf("%d",&l);
	printf("Enter the column of an Array:");
	scanf("%d",&k);
	int marks[l][k],trans[k][l],i,j;
	
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
	
	
	for(i=0;i<l;i++)
	{	
		for(j=0;j<k;j++)
		{
			trans[j][i] = marks[i][j];	
		}
	}
	printf("\nTranspose Elements:\n");
	for(i=0;i<k;i++)
	{
		for(j=0;j<l;j++)
		{
			printf("%d ",trans[i][j]);
		}
		printf("\n");
	}	
	return 0;
}
