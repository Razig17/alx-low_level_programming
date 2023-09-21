#include "main.h"
/**
 *_strcmp - a function that compares two strings.
 *
 *@s1: first string
 *@s2: second string
 *Return: returns an integer
 *
 */


int _strcmp(char *s1, char *s2)
{
	int i;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			i = ((int)*s1) - ((int)*s1);
			break;
		}
		s1++;
		s2++;
	}
	return (i);
}
