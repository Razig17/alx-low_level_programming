#include "main.h"
#include <stdlib.h>
/**
 *_strlen_recursion - a function that returns the length of a string
 *
 *@s: pointer to an array
 *
 *Return: returns the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}


/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *which contains a copy of the string given as a parameter.
 *
 *@str: a pointer to the string that will be copied.
 *
 * Return: NUll or pointer to the array.
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i, size;

	if (str == 0)
		return (NULL);
	size = _strlen_recursion(str);
	s = malloc(sizeof(char) * size);
	 if (s == 0)
		return (NULL); 
	i = 0;
	while (i < size)
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}
