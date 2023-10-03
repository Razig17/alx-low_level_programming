#include <stdio.h>
#include <stdlib.h>
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
	int  n , sum = 0;

	if (argc != 2 )
	{
		printf("Error\n");
		return (1);

	}

	n = atoi(argv[1]);;

	if ((n / 25) != 0)
	{
		sum += n / 25;
		n = n % 25;
	}
	 if ((n / 10 ) != 0)
	{
		sum += n / 10;
		n = n % 10;
	}
	 if ((n / 5) != 0)
	{
		sum += n / 5;
		n = n % 5;
	}
	 if ((n / 2) != 0)
	{
		sum += n / 2;
		n = n % 2;
	}
	if ((n / 1) != 0)
	{
		sum += n / 1;
	}
	printf("%d\n", sum);
	return (0);
}
