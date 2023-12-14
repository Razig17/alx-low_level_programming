#include "main.h"
int _strlen(const char *s);
unsigned int _pow(int x, int y);


/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */

int _strlen(const char *s)
{
	int i;
	int len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if ((*(s + i) == '0') || (*(s + i) == '1'))
			len += 1;
		else
			return (0);
	}
	return (len);
}


/**
  * binary_to_uint - Converts a binary number to an unsigned int
  * @b: The binary string
  *
  * Return: The converted number
  */

unsigned int binary_to_uint(const char *b)
{
	int l, i;
	unsigned int n = 0;

	if (b == NULL)
		return (0);
	l = _strlen(b);
	if (l == 0)
		return (0);
	l--;
	for (i = 0; i <= l; i++)
	{
		if (*(b + i) == '1')
			n += _pow(2, l - i);
	}
	return (n);
}

/**
 * _pow - a function that returns the value of x
 * raised to the power of y
 * @x: an integer
 * @y: an integer
 *
 *Return: returns x to the power of y.
 */

unsigned int _pow(int x, int y)
{
	if (y == 0)
		return (1);
	else
		return (x * _pow(x, y - 1));
}
