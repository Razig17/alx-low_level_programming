#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory using malloc
 *
 *@nmemb : number of block
 *@size : size of the block
 *
 *Return: returns a pointer to the memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *add;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);
	add = malloc(nmemb * size);
	if (add == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*(add + i) = 0;
	return (add);
}
