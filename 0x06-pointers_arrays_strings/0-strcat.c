#include "main.h"
/**
 *_strcat - a function that concatenates two strings.
 *
 *@dest: destination string
 *@src: source string
 *
 *Return: the pointer to dest
 *
 */



char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
		break;
		i++;
		j++;
	}
	return (dest);
}
