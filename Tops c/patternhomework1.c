#include <stdio.h>
int main(){
	int i, j; 
	char name[] = "INDIA";
//	printf("Enter the name ");
//	scanf("%s",&name);
	
	for(i=0;i<=4;i++){
		for(j=0;j<=i;j++){
			printf("%c ",name[j]);
		}
		printf("\n");
	}
	
}
