#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number of arguments passed into it
 *
 *@argc: number of command line  arguments
 *@argv: An array containing the program command line arguments
 *Return: always 0
 *
 */

int main(int argc, char *argv[])
{
	argv++;
	printf("%d\n", argc);
	return (0);
}
