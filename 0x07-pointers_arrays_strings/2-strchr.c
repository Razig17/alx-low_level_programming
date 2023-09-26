#include "main.h"
11;rgb:0000/0000/0000/**
 *_strchr - a function locates a character in a string.
 *
 *@s: a pointer to an array
 *@c: a character
 *Return: the pointer to first occurrence of the character
 *in the string or NULL if not found
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		return (s + i);
	}
	return (NULL);
}
