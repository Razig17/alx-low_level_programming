#include <stdlib.h>
#include "calc.h"
/**
  * get_op_func - get the operator
  * @s: operator
  *
 *Return: the desired function pointer.
 */
int (*get_op_func(char *s))(int, int))
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	while (i < 5)
	{
		if (s && s == ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (0);
}
