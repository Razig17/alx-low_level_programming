#include "main.h"
/**
 *_strncpy - a function that concatenates two strings.
 *
 *@dest: destination string
 *@src: source string
 *@n: bits
 *Return: the pointer to dest
 *
 */



char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while ((j >= 0) && (j < n))
	{
		*(dest + j) = *(src + j);
		if (*(src + j) == '\0')
		break;
		j++;
		for ( ; j < n; j++)
			dest[i] = '\0';
	}
	return (dest);
}
