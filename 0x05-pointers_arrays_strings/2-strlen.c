#include "main.h"
/**
 * int_strlen -findes the length of a string
 *
 *@s: the string
 *
 *Return: returens the length of the string
*/
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; *(s+i) != '\0'; i++)
		len += 1;
	return (len);
}
