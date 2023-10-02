#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments passed into it
 *
 *@argc: number of command line  arguments
 *@argv: arguments array
 *Return: always 1
 *
 */

int main(int argc, int *argv[])
{
	if (argc == 3)
		printf("%d\n", *argv * *(argv + 1));
	else
		printf("Error\n");
	return (1);
}
