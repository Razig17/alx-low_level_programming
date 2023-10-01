#include "main.h"
/**
 * print_number - print a number
 *
 *@n:  input of fucnction
 *
*/
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if ((n / 10) > 0)
		print_number(n / 10);
	_putcahr((num % 10) + '0');
}
