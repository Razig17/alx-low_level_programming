#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 *
 *@b : number of bits to allocate
 *
 *Return : returns a pointer to the memory
 */

void *malloc_checked(unsigned int b)
{
	int *add;

	add = malloc(b);
	if (add = NULL)
	{
		free(add);
		exit(98);
	}
	return (add);
}
