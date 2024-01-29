#include "main.h"
/**
 *_strstr - finds the first occurrence of the substring needle
 * in the string haystack
 *
 *@haystack: a pointer to an array
 *@needle: a pointer to source array
 *Return: returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 *
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *hs = haystack;
		char *nd = needle;

		while (*hs == *nd && *nd != '\0')
		{
			hs++;
			nd++;
		}
		if (*nd == '\0')
			return (haystack);
	}
	return (NULL);
}
