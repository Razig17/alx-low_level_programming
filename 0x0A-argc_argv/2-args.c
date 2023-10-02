#include <stdio.h>
11;rgb:0000/0000/0000#include <stdlib.h>
/**
 * main - prints all arguments passed into it
 *
 *@argc: number of command line  arguments
 *@argv: arguments array
 *Return: always 0
 *
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
	printf("%s\n", *argv++);
	i++;
	}
	return (0);
}
