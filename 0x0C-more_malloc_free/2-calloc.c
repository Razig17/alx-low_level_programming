#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory using calloc
 *
 *@nmemb : number of block
 *@size : size of the block
 *
 *Return: returns a pointer to the memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *add;

	add = calloc(nmemb, size);
	if ((add == NULL) || (size == 0) || (nmemb == 0))
	{
		return (NULL);
	}
	return (add);
}
