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
 * argstostr - a function that concatenates arguments of the program
 *
 *@ac: arguments number
 *@av: a pointer to the arguments that will be concatenated
 *
 * Return: NUll or pointer to the array.
 */
char *argstostr(int ac, char **av)
{
	char *s;
	unsigned int j, k = 0, size;
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0 ; i < ac; i++, size++)
		size += _strlen_recursion(av[i]);
	s = malloc((sizeof(char) * size) + 1);
	if (s == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			s[k] = av[i][j];
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';

	return (s);
}
