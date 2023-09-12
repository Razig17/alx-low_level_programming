#include "main.h"

/**
 * prints alphabets using _putchar
 *
*/
void print_alphabet(void)
{
	int ch = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
