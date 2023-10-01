#include "main.h"
/**
 * print_number - print a number
 *
 *@n:  input of fucnction
 *
 */
void print_number(int n)
{
	unsigned int n1;

	n1 = n;
	if (n < 0)
	{
		n1 = -n1;
		_putchar('-');
	}
	if ((n1 / 10) > 0)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}
