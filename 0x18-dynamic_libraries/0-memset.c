#include "main.h"
/**
 *_memset - a function that fills memory with a constant byte
 *
 *@s: pointer to an array
 *@b: constant byte
 *@n: number of bits
 *Return: the pointer to s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
