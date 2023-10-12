#include <stdlib.h>
#include "function_pointers.h"
/**
 *int_index - searches for an integer
 *
 *@array: a pointer to array
 *@size: size of array
 *@cmp: a function poinetr
 *Return: Nothing.
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
