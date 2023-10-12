#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * sum_them_all - ...
  *@n: numbers of parameters
  *
  *Return: sum of numbers given to it.
  *
  */

 void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;


	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (separator != NULL && i < n - 1)
			 printf("%s", separator);
	}

	 printf("\n");
	va_end(num);
	return (sum);
}
