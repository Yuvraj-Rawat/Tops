#include<iostream>
using namespace std;

long long Factorial(int num)
{
	if(num == 0 || num == 1){
		return 1;
	}
	else{
		return num * Factorial(num-1);
	}
}

int main()
{
	int num;
	
	cout<<"Enter the number: ";
	cin>>num;
	
	if(num<0){
		cout<<"No factorial for Negative number.\n";
	}
	else{
		cout<<"Factorial of "<<num<<" = "<< Factorial(num);
	}
	return 0;
}
