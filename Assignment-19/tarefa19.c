#include <stdio.h>
#include <stdlib.h>


int allocate_memory(char **pointer, int target_size)
{

	*pointer = malloc(sizeof(int));
	printf("[+] Allocating %d bytes of memory ... \n", target_size);
	printf("[+] Memory allocated successfully! \n");
	return 0;

}


int main(void)
{

	char *dummy;
	int arraysize;

	printf("Enter the amount of memory that you would like to allocate: \n");
	scanf("%d",&arraysize);

	if (allocate_memory(&dummy,arraysize) != 0) 
	{
		printf("Error allocating memory!!");
	}

	printf("[-] Freeing %d bits of memory ...",arraysize);
	free(dummy);

	return 0;

}





