// using array in structure

#include<stdio.h>
#include<string.h>

struct student{
	char name[100];
	int roll_no;
	double cgpa;
};

int main()
{
	struct student IT[50];
	struct student MBA[50];
	
	strcpy(IT[0].name,"Yuvraj");
	IT[0].roll_no = 1;
	IT[0].cgpa = 8.12;
	
	printf("Roll no of student is: %d\n",IT[0].roll_no);
	printf("Name of student is: %s\n",IT[0].name);
	printf("CGPA of student is: %lf\n",IT[0].cgpa);
	
	return 0;
}
