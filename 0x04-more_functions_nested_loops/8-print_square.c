#include "main.h"
/**
 * print_line - draws a straight line
 *
 *@n:  input of fucnction
 *
*/
void print_line(int n)
{
	for (int k = n; k > 0; k--)
	{
		int j = n;
		while (j > 0)
		{
			_putchar('#');
		j--;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
