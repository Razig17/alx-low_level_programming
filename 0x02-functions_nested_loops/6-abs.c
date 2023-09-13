#include "main.h"
/**
 * _abs - gives the absolute value of a number
 *
 *@a: checks input of fucnction
 *
 * Return: returns the absolute value of a number
*/
int _abs(int a)
{

	if (a < 0)
		a = a * (-1);
	return (a);
}
