#include <stdio.h>
/**
 * main - prints the numbers from 0 to 9
 * Return: 0
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar('0' +  n);
	putchar('\n');
	return (0);
}
