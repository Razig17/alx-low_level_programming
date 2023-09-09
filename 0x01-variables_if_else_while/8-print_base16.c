#include <stdio.h>
/**
 * main - prints the numbers of base 16 from 0 to f
 * Return: 0
*/
int main(void)
{
	int n;
	char c;

	for (n = 0; n < 10; n++)
		putchar('0' +  n);
	for (c = 'a'; c < 'g'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
