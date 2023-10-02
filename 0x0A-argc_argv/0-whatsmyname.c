#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the program name
 *
 *@argc: number of command line  arguments
 *@argv: An array containing the program command line arguments
 *Return : always 0
 *
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}
