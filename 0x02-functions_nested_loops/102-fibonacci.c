#include <stdio.h>
/**
 *main -  prints the first 50 Fibonacci numbers
 *
 *Return: Always 0
 */
int main(void)
{
	int i;
	int temp;
	int fib1 = 1;
	int fib2 = 2;

	printf("%d, %d, ", fib1, fib2);
	for (i = 2; i < 51; i++)
	{
		temp = fib2;
		fib2 = fib1 + fib2;
		fib1 = temp;
		if (i == 50)
		        printf("%d\n", fib2);
		else if (i < 50)
			printf("%d, ", fib2);
	}
	return (0);
}
