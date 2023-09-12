#include "main.h"
11;rgb:0000/0000/0000
/**
 *print_alphabet_x10 - prints alphabets using _putchar ten times
 *
*/
void print_alphabet_x10(void)
{
	int ch = 0;
	int i;
	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
