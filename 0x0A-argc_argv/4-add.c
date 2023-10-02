#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
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
	unsigned int j;
        int i, sum = 0;
	char *s;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
	        s = argv[i];

	        for (j = 0; j < strlen(s); j++)
	        {
			if (s[j] < 48 || s[j] > 57)
		        {
				printf("Error\n");
		        	return (1);
			}
		}
		sum+= atoi(s);
	}
	printf("%d\n", sum);
	return (0);

}
