#include "main.h"

/**
 * main - prints _putchar
 * Return: 0
*/
void print_alphabet(void)
{
	int ch = 0;

	for (ch ='a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
