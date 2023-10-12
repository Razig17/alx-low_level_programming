#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 *
 *@name: a pointer to the name
 *@f: a function poinetr
 *Return: Nothing.
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
