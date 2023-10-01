#include "main.h"
/**
 *_strlen -findes the length of a string
 *
 *@s: the string
 *
 *Return: returens the length of the string
*/
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		len += 1;
	return (len);
}



/**
 * rev_string - a function that reverses a string
 *
 * @s : a pointer to a string
 */

void rev_string(char *s)
{
	int l, i,j;

        l = _strlen(s);
	char c[l];
	j = l -1
		for (i = 0; i < l; i++)
			c[i] = s[i];
	for (i = 0; i < l; i++)
		s[i] = c[j--];
	return (s);
	}
