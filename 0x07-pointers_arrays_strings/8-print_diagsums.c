#include "main.h"
/**
 *print_diagsums - prints the sum of the two diagonals
 *of a square matrix of integers
 *
 *@a: a pointer to the first in the matrix
 *@size: size of the square matrix
 *
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
		sum1 = sum1 + a[i * (size + 1)];
	for (j = 1; j <= size; j++)
		sum2 = sum2 + a[j * (size - 1)];
	printf("%d, %d\n", sum1, sum2);
}
