#include "main.h"
/**
 *_memset - a function that concatenates two strings.
 *
 *@s: destination string
 *@b: source string
 *@n: bits
 *Return: the pointer to dest
 *
 */


char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for(i = 0; i < n; i++)
		*(s + i) = b;
	return (s)
}
