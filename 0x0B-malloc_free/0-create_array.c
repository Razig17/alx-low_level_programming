#include "main.h"
0;276;0c#include <stdlib.h>
/**
 * create_array -creates an array of chars, and initializes it with a char.
 *
 *@size: size of the array.
 *@c: the specific char that will be initialized.
 *
 * Return: NUll or pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	if (size == 0 || s == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	i = 0;
        while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
}
