#include "main.h"
/**
 *leet -encodes a string into 1337
 *@s: the string
 *
 *Return: returns encoded string
 *
 */


char *leet(char *s)
{
	int key [] = {'a', 'e', 'o', 't', 'l'};
	int value[] = {4, 3, 0, 7, 1};
	int i;
	int j;

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if ((s[i] == key[j]) || (s[i] == key[j] - 32))
				*(s + i) = value[j] + 48;
		}
		i++;
	}
	return (s);
}
