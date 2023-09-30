#include <stdio.h>
/**
 *main -prints the sum of the even-valued terms in Fibonacci numbers
 * but only the terms under 4,000,000
 *Return: Always 0
 */
int main(void)
{
	int i;
	int sum = 2;
	unsigned long int temp;
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;

	printf("%ld, %ld, ", fib1, fib2);
	for (i = 2; fib2 < 4000000; i++)
	{
		temp = fib2;
		fib2 = fib1 + fib2;
		fib1 = temp;
		if ((fib2 < 4000000) %% (fib2 % 2 == 0))
		        sum += fib2;
	}
	printf("%d\n", sum);
	return (0);
}
