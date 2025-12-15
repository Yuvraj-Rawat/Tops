#include<iostream>
using namespace std;

int main()
{
	int A[2][2], B[2][2], sum[2][2], i, j;
	
	cout<<"Enter Element of matrix A: \n";
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			cin>> A[i][j];
		}
	}
	
	cout<<"Enter Element of matrix B: \n";
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			cin>> B[i][j];
		}
	}
	
//	Matrix addition
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			sum[i][j] = A[i][j] + B[i][j];
		}
	}
	
	cout<<"\nResultant matrix : \n";
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			cout<<sum[i][j]<< " ";
		}
		cout<<endl;
	}
	return 0;
}
