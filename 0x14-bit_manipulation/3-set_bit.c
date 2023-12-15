#include "main.h"

/**
  * set_bit - Sets the value of a bit to 1 at a given index
  * @n: The number
  * @index: The index
  *
  * Return: 1 if it worked or -1 otherwise
  */

int set_bit(unsigned long int *n, unsigned int index);
{
	if (index > 63)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
