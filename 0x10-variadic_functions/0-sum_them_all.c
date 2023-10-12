#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
 /**
 * sum_them_all - returns the sum of all its parameters.
 *
 *@...: numbers that will be added
 *@n: numbers of parameters
 *Return: sum of numbers given to it.
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list num;

	if (n == 0)
		return (0);

	va_start(num, n);
	for (i = 0; i < n;i++)
		sum += va_arg(num, int);
	va_ends(num);
	return (sum);
}
