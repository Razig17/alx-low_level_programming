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
 * str_concat - a function that concatenates two strings.
 *
 *@s1: a pointer to the first string
 *@s2: a pointer to the string that will be concatenated
 *
 * Return: NUll or pointer to the array.
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, j, size1, size2;

	size1 = _strlen_recursion(s1);
	size2 = _strlen_recursion(s2);
	s = malloc(size1 + size2 + 1);
	if (s == 0)
		return (NULL);
	i = 0;
	while (i < size1 && s1[0] != 0)
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size1 + size2 && s2[0] != 0)
	{
		s[i] = s2[j];
		j++;
		i++;
	}

	return (s);
}
