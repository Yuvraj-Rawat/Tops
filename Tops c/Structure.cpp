#include<stdio.h>
#include<string.h>

struct student{
	char name[100];
	int roll;
	float cgpa;
};

typedef struct computer science engineering{
	
}cse;

int main()
{
	struct student s1;
	//s1.name = "yuvraj";  it will show Error.
	strcpy(s1.name,"Yuvraj");
	s1.roll = 1;
	s1.cgpa = 8.12;
	
	printf("Rollno of student is: %d\n",s1.roll);
	printf("Name of student is: %s\n",s1.name);
	printf("CGPA of student is: %f\n",s1.cgpa);
	
	struct student s2;
	//s1.name = "yuvraj";  it will show Error.
	strcpy(s2.name,"Dhruv");
	s2.roll = 2;
	s2.cgpa = 7.42;
	
	printf("Rollno of student is: %d\n",s2.roll);
	printf("Name of student is: %s\n",s2.name);
	printf("CGPA of student is: %f\n",s2.cgpa);
	
	
	return 0;
}
