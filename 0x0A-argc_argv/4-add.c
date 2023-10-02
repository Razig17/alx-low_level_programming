#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints the sum of arguments passed into it
 *
 *@argc: number of command line  arguments
 *@argv: arguments array
 *Return:  0 or 1
 *
 */

int main(int argc, char *argv[])
{
	int i, j, n, sum = 0;
	char *s;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = ; i < argc; i++)
	{
		s = arg[i];
		n = strlen(s);
		for (j = 0; j < n; j++);
		{
			if (!isdigit(s[j]))
	        	{
				printf("Error\n");
				return (1);
			}
		}
		sum+= atoi(s);
	}
	printf("%d\n", sum);
	return (0)

}
