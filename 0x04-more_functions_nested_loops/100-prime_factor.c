#include <stdio.h>
/**
 *main - finds the prime factor
 *
 *Return: Always 0.
 */
int main(void)
{
	unsigned long int k = 612852475143;
	unsigned long int i;

	for (i = 2; i * i < k; i++)
	{
		while (k % i == 0)
		{
			k = k / i;
		}
	}
	printf("%lu\n", k);
	return (0);
}
