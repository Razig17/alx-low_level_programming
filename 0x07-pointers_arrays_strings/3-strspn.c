#include "main.h"
/**
 *_strspn - a function that gets the length of a prefix substring
 *
 *@s: a pointer to an array
 *@accept: a pointer to source array
 *Return: returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, found;
	unsigned int bytes = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				bytes++;
				found = 1;
			}

		}
		if (found == 0)
			return (bytes);
	}
	return (bytes);
}
