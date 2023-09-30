#include "main.h"
/**
 *print_times_table - prints the n times table
 *@n : the number
 *
*/

void print_times_table(int n)
{
	int num, mult, prod;

	if ((n > 15) || (n < 0))
		return;
	for (num = 0; num <= n; num++)
	{
	_putchar('0');

	for (mult = 1; mult <= n; mult++)
	{
	_putchar(',');
	_putchar(' ');

	prod = num * mult;

	if (prod <= 99)
	_putchar('  ');
	else if (prod <= 9)
		_putchar(' ');
	else
	_putchar((prod / 10) + '0');

	_putchar((prod % 10) + '0');
	}
	_putchar('\n');

}
}
