#include "main.h"
11;rgb:0000/0000/0000/**
 *_print_rev_recursion - a function that prints a string, in reverse
 *
 *@s: pointer to an array
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
