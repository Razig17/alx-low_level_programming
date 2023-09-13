#include "main.h"
/**
 * print_last_digit - gives the absolute value of a number
 *
 *@n: checks input of fucnction
 *
 * Return: returns the last digit of a number
*/
int print_last_digit(int n)
{
	int ls;

	if (n < 0)
		ls = (-1) * (n % 10);
	ls = n % 10;
	
	return (ls);
}
