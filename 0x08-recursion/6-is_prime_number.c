#include "main.h"
/**
 * is_prime_number - a function that findes if an integer is a prime number
 *
 * @n: an integer
 * @s: an integer
 *Return: returns 1 if the integer is a prime number or 0 otherwise
 */
int is_prime(int n, int s);


int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 *is_prime - a function that findes if an integer is a prime number
 *@n : the number
 *@s: an integer
 *Return: returns 1 if the integer is a prime number or 0 otherwise
*/


int is_prime(int n, int s)
{
	if (n % s == 0 || n == 0)
		return (0);
	else if (s < n / 2)
		return (is_prime(n, s + 1));
	else
		return (1);
}
