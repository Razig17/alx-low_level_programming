#include "main.h"
/**
 *print_array - prints a string, followed by a new line
 *
 *@a : the array
 *@n: no of array elemnts
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1 )
			prinf("%d, ", a[i]);
		else
			 prinf("%d\n", a[i]);
	}
}
