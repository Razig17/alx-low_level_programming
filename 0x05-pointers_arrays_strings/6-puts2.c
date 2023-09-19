#include "main.h"
/**
 *_puts2 - prints every other char of  a string, followed by a new line
 *
 *@str: the string
 */
void _puts2(char *str)
{
	int i;
	int len = -1;

	for (i = 0; *(str + i) != '\0'; i++)
		len += 1;
	for (i = 0; i < len; i += 2)
		_putchar(*(str + i));
	_putchar('\n');
}
