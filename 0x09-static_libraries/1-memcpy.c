#include "main.h"
/**
 *_memcpy - a function copies n bytes from src to dest.
 *
 *@dest: a pointer to an array
 *@src: a pointer to source array
 *@n: bits
 *Return: the pointer to dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
