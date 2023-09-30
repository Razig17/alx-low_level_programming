/**
 * print_to_98 - a function that prints all natural numbers from n to 98,
 * followed by a new line.
 *@n :the number
 */
#include "main.h"

void print_to_98(int n)
{
	int i, j;

	if (n > 98)
	{
		for (i = n; i > 98 ; i--)
			printf("%d, ", n);
	}
	else if (n < 98)
	{
		for (i = n; i < 98 ; i++)
			printf("%d, ", n);
	}
	printf("98\n");
}
