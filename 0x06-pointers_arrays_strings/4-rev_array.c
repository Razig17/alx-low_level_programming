#include "main.h"
/**
 *reverse_array - a function that reverses the content of an array .
 *
 *@a: array of integers
 *@n : number of elements
 */


void reverse_array(int *a, int n)
{
	int i;
	int b[n - 1];

	for (i = 0 ; i < n; i++)
		b[i] = a[n - 1 - i];
	for (i = 0; i < n; i++)
		*(a + i) = b[i];
}
