#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - prints strings
  *@n: numbers of parameters
  *@separator: the string to be printed between strings
  *
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *sr;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		sr = va_arg(str, char *);
		if (sr == NULL)
			printf("%s", "(nill)");

		else if (sr != NULL)
		printf("%s", sr);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(str);
}
