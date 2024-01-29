#include "main.h"
/**
 * _isdigit - checks for digits
 *
 *@c: checks input of fucnction
 *
 * Return: returns 1 if c is lowercse otherwise returns 0
*/
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
