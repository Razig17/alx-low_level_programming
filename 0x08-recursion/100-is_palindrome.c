#include "main.h"
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
 *is_pal - findes is a string is palindrome
 *@s: pointer to a string
 *@a: index of frist char
 *@z: index of last char
  * Return: .
 */

int is_pal(int a, int z, char *s)
{
	if (s[a] == s[z])
		return (is_pal(a + 1, z - 1, s));
	else if (a > z)
		return (1);
	else
		return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s);
	if (l <= 1)
		return (1);
	else
		return (is_pal(0, l - 1, s));
}
