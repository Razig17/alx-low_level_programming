#include <stdio.h>
/**
 *main -  prints the first 98 Fibonacci numbers
 *
 *Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int temp, fib1_min , fib1_max, fib2_min, fib2_max;
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;
	unsigned long int half1, half2;

	printf("%ld, %ld, ", fib1, fib2);
	for (i = 3; i <= 92; i++)
	{
		temp = fib2;
		fib2 = fib1 + fib2;
		fib1 = temp;
	        printf("%lu, ", fib2);
	}
	fib1_max = fib1 / 10000000000;
	fib2_max = fib2 / 10000000000;
	fib1_min = fib1 % 10000000000;
	fib2_min = fib2 % 10000000000;

	for (i = 92; i < 98; i++)
	{
		half1 = fib1_max + fib2_max;
		half2 = fib1_min + fib2_min;
		if (half2 > 9999999999)
		{
			half1++;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (i != 97)
			printf(", ");
		else if (i == 97)
			printf("\n");
		fib1_max = fib2_max;
		fib1_min = fib2_min;
		fib2_max = half1;
		fib2_min = half2;
	}
	return (0);
}
