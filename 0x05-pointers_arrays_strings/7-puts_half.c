#include "main.h"
/**
 *puts_half - prints second half  of  a string, followed by a new line
 *
 *@str: the string
 */
void puts_half(char *str)
{
	int i;
	int len = 0;

	for (i = 0; *(str + i) != '\0'; i++)
		len += 1;
	for (i = len / 2 ; i < len ; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
