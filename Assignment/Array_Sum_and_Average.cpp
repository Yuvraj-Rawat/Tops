#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number of elements: ";
	cin>>n;
	cout<<"Enter "<< n <<" elements: "<<endl;
	int arr[n],sum=0;
	float average;
	
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	
	average = (float)sum/n;
	
	cout << "\nSum of array elements = " << sum << endl;
    cout << "Average of array elements = " << average << endl;
	
	return 0;
}
