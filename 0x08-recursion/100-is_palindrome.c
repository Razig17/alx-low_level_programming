#include "main.h"
/**
 *
 *
 *
 */
int is_pal(int a , int z, char *s);
int _strlen_recursion(char *s);
int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s);
	if (l <= 1)
		return (1);
	else if (l % 2 != 0)
	        return (0);
	else
		return (is_pal(0, l, s));
}

int is_pal(int a , int z, char *s)
{
	if ((*(s + a) == *(s + z)) && (z > a))
		return (is_pal(a + 1, z - 1 , s));
	else if (a > z)
		return (1);
	else
		return (0);
}











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
