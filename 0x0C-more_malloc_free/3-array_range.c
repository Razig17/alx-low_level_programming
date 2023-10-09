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
	int i;

	if (min > max)
		return (NULL);

	add = malloc(sizeof(int) * (max - min + 1));
	if (add == NULL)
		return (NULL);

	for (i = 0; i <= max - min + 1; i++)
		*(add + i) = min++;
	return (add);
}
