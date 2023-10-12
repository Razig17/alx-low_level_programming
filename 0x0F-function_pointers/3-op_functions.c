#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
 /**
 * op_add - adds two numbers
 *
 *@a: frist number
 *@b: 2nd number
 *Return: a + b.
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sutracts two numbers
 *
 *@a: frist number
 *@b: 2nd number
 *Return: a - b.
 *
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - muliplies two numbers
 *
 *@a: frist number
 *@b: 2nd number
 *Return: a * b.
 *
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divde
 *
 *@a: frist number
 *@b: 2nd number
 *Return: a / b.
 *
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - fineds the remainder of division
 *
 *@a: frist number
 *@b: 2nd number
 *Return: a % b.
 *
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
        }
		return (a % b);
}
