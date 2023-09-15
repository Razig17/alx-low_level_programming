#include <stdio.h>
/**
 *main - finds the prime factor
 *
 *Return: Always 0.
 */
int main(void)
{
	long int k = 612852475143;
	int i;

	for (i = 2; i * i < k; i++)
	{
		while (k % i == 0)
		{
			k = k / i;
		}
	}
	printf ("%d\n", k);
	return 0;
}
