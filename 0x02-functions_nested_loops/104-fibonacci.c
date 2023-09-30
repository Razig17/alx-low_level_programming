#include <stdio.h>
/**
 *main -  prints the first 98 Fibonacci numbers
 *
 *Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int temp;
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;

	printf("%ld, %ld, ", fib1, fib2);
	for (i = 2; i < 98; i++)
	{
		temp = fib2;
		fib2 = fib1 + fib2;
		fib1 = temp;
		if (i == 97)
			printf("%ld\n", fib2);
		else if (i < 98)
			printf("%ld, ", fib2);
	}
	return (0);
}
