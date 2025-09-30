#include<stdio.h>

int main()
{
	FILE*fptr;
	fptr = fopen("2atest.txt","w");
	
	fprintf(fptr,"%c",'Y');
	fprintf(fptr,"%c",'U');
	fprintf(fptr,"%c",'V');
	fprintf(fptr,"%c",'R');
	fprintf(fptr,"%c",'A');
	fprintf(fptr,"%c",'J');
	
	fptr = fopen("2atest.txt","a");
	
	fprintf(fptr,"%c",'R');
	fprintf(fptr,"%c",'A');
	fprintf(fptr,"%c",'W');
	fprintf(fptr,"%c",'A');
	fprintf(fptr,"%c",'T');
	
	fclose(fptr);
}
