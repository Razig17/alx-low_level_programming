#include "main.h"
11;rgb:0000/0000/0000/**
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
	if ((len % 2) == 0)
		len = (len - )1 / 2;
	else
		len = len / 2;
	for (i = len / 2 ; i < len ; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
