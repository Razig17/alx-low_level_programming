#include "main.h"
/**
 * print_number - print a number
 *
 *@n:  input of fucnction
 *
*/
void print_number(int n)
{
	int j = n;

	while (j > 0)
	{
		int i = 0;

		while (i < n - j)
		{
			_putchar(' ');
			i++;
		}
		_putchar('\\');
		_putchar('\n');
		j--;
	}
	if (n <= 0)
	_putchar('\n');
}
