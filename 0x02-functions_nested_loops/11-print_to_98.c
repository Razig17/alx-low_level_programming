/**
 * print_to_98 - a function that prints all natural numbers from n to 98,
 * followed by a new line.
 *@n :the number
 */
#include "main.h"

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98 ; i--)
			printf("%d, ", i);
	}
	else if (n < 98)
	{
		for (i = n; i < 98 ; i++)
			printf("%d, ", i);
	}
	printf("98\n");
}
