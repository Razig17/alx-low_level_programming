#include "main.h"
/**
 *_strncat - a function that concatenates two strings.
 *
 *@dest: destination string
 *@src: source string
 *@n: bits
 *Return: the pointer to dest
 *
 */



char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while ((j >= 0) && (j < n))
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
		break;
		i++;
		j++;
	}
	return (dest);
}
