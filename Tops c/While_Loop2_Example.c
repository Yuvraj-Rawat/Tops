# include<stdio.h>
// Factorial Example using while loop
int main(){
	int i=1,num,fact=1;
	printf("Enter the number: ");
	scanf("%d",&num);
	while(i<=num){
		printf("%d\n",i);
		fact = fact*i;
		i++;
	}
	printf("Factorial of %d is %d",num,fact);
}
