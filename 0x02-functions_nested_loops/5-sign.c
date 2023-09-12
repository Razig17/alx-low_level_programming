#include "main.h"
/**
 * print_sign - checks for alphabetic character
 *
 *@n: checks input of fucnction
 *
 * Return: returns 1 if c is the number is postive
 *	0 if its zero and -1 if it is negative
*/
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
