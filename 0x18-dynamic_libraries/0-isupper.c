#include "main.h"
/**
 * _isupper - checks for lowercase character
 *
 *@c: checks input of fucnction
 *
 * Return: returns 1 if c is lowercse otherwise returns 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
