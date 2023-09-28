#include "main.h"
/**
 * pow_recursion - a function that returns the value of x
 * raised to the power of y
 * @x: an integer
 * @y: an integer
 *
 *Return: returns x to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
