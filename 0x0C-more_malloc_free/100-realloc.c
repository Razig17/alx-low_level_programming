#include "main.h"
#include <stdlib.h>
/**
 * _realloc- reallocates memory using malloc and free
 *
 *@old_size: old allocated size
 *@new_size: new size that will be allocted
 *@ptr: number of bits to allocate
 *
 *Return: returns a pointer to the memory.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;
	unsigned int i;

	if (ptr == NULL)
	{
		a = malloc(new_size);
		if (a == NULL)
			return (NULL);
		return (a);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	a = malloc(new_size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)a + i) = *((char *)ptr + i);
	free(ptr);
	return (a);
}
