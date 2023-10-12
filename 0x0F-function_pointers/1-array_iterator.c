#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element of an array.
 *
 *@array: a pointer to array
 *@size: a pointer to size of array
 *@action: a function poinetr
 *Return: Nothing.
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && size != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
