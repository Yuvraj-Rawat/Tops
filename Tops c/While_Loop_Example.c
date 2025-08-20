# include<stdio.h>
//  Table Example using while loop
int main(){
	int i=1,j=1,ans;
	printf("Enter the number: ");
	scanf("%d",&i);
	
	while(j<=10){
		ans = i*j;
		printf("%d * %d = %d\n",i,j,ans);
		j++;   
	}
}
