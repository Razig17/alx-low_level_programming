#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: 0
*/
int main(void)
{
	int i;
	int j;
	int k;
for (i = 0; i < 8; i++)
{
	for (j = i + 1; j < 10; j++)
	{
		for (k = j + 1; k < 10; k++)
		{
			putchar('0' +  i);
			putchar('0' +  j);
			putchar('0' +  k);
			if (i == 7)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
}
	putchar('\n');
	return (0);
}
