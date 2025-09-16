#include<stdio.h>

 main(){
	
//	* = value
// 	& = address
//	pointer = *ptr
	
	int age = 25;
	int *ptr = &age;
	int _age = ptr;
	
	// Address
	
	// we use %d instead of %p because it give value in hexa decimal.
	printf("Address of age: %d\n",&age); // print address of age 
	printf("Value PTR: %d\n",ptr); // print value in ptr
	printf("Address of ptr: %d\n",&ptr); // 
	
	// value
	printf("Value of age: %d\n",age);
	printf("value of ptr: %d\n",*ptr);
	printf("value : %d\n",*(&age));
}
