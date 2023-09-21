#include "main.h"
/**
 *_strspy - a function that concatenates two strings.
 *
 *@dest: destination string
 *@src: source string
 *@n: bits
 *Return: the pointer to dest
 *
 */



char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

       

	while ((j >= 0) && (j < n))
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
		break;
		i++;
		j++;
		for ( ; i < n; i++)
			dest[i] = '\0';
	}
	return (dest);
}
