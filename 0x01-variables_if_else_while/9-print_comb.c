#include <stdio.h>
/**
 * main - prints the numbers from 0 to 9 separated by , followed by a space
 * Return: 0
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' +  n);
		if (n == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
