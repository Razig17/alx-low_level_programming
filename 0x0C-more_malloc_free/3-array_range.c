#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 *
 *@min : frist integer
 *@max : last integer
 *
 *Return: returns a pointer to the memory.
 */

int *array_range(int min, int max)
{
	int *add;
	int i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1
	add = malloc(sizeof(int) * len);
	if (add == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		*(add + i) = min++;
	return (add);
}
