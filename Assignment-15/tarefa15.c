#include <stdio.h>


void main ()
{

	int dummy;
	int *pointer = &dummy;

	printf("The value of int variable is %d\n", dummy);
	printf("The value of the pointer to the int variable is %p\n",pointer);
	printf("The memory address of the int variable is %p\n", &dummy);
	printf("The value held at the memory location that the pointer is pointing to is: %d\n", *pointer);

}


