#include "main.h"
/**
 * _islower - checks for alphabetic character
 *
 *@c: checks input of fucnction
 *
 * Return: returns 1 if c is an alphabet otherwise returns 0
*/
int _islower(int c)
{

	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);

}
