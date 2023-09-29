#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural square root
 * of a number
 *
 * @n: an integer
 * @s: the square root
 *Return: returns natural square root of n or
 * (-1) if n dose not have a natural square
 */
int mysqrt(int n, int s);


int _sqrt_recursion(int n)
{
	return (mysqrt(n, 1));
}

/**
 *mysqrt - finds the square root of a number
 *@n : the number
 *@s: the square root guess
 *Return: returns natural square root of n or.
 *(-1) if n dose not have a natural square
 */


int mysqrt(int n, int s)
{
	if (s * s == n)
		return (s);
	else if (s * s < n)
		return (mysqrt(n, s + 1));
	else
		return (-1);
}
