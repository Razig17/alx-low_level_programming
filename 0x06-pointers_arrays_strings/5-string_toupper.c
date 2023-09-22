#include "main.h"
/**
 *string_toupper -changes all lowercase letters of a string to uppercase.
 *
 *@c: pointer to a string
 *
 *Return: string in uppercase
 *
 */


char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
	{
		if ((c[i] >= 'a') && (c[i] <= 'z'))
			*(c + i) = c[i] - 32;
	}
	return (c);
}
