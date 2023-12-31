#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
  * print_char - Prints a character
  * @args: a list of variadic arguments
  *
  */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
  * print_int - Prints a character of integer type
  * @args: a list of variadic arguments
  *
  */
void print_int (va_list args)

{
	printf("%d", va_arg(args, int));
}

/**
  * print_float - Prints a float
  * @args: a list of variadic arguments
  *
  */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
  * print_string - Prints a string
  * @args: a list of variadic arguments
  *
  */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("%s", "(nil)");
		return;
	}

	printf("%s", str);
}

/**
  * print_all - prints anything
  * @format: the specifier
  *
  */
void print_all(const char * const format, ...)
{
	va_list args;
	f_t formats[] = {
		{ "c", print_char },
		{ "i", print_int },
		{ "f", print_float },
		{ "s", print_string },
		{NULL, NULL}
	};
	unsigned int i = 0;
	unsigned int j = 0;
	char *sep = "";

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (formats[j].format)
		{
			if (format[i] == *formats[j].format)
			{
				printf("%s", sep);
				formats[j].f(args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
