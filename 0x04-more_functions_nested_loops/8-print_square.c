#include "main.h"
/**
 * print_square - draws a square
 *
 *@size:  input of fucnction
 *
*/
void print_square(int size)
{
	int k;

	for ( k = size; k > 0; k--)
	{
		int j = size;
		while (j > 0)
		{
			_putchar('#');
		j--;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
