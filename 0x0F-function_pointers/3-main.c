#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - simple calc
  * @argc: arguments number
  * @argv: arguments array
  *
  * Return: ...
  */
int main(int argc, char *argv[])
{
	int (*opr_u)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opr_u = get_op_func(argv[2]);

	if (!opr_u)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", opr_u(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
