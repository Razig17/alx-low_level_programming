#include "main.h"

/**
  * flib_bit - Finds the number of bits needed to flip to get from
  * one number to another
  * @n: The first number
  * @m: The second number
  *
  * Return: number of bits
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, Xor;

	Xor = n ^ m;
	for (; Xor; Xor >>= 1)
		count += Xor & 1;
	return (count);
}
