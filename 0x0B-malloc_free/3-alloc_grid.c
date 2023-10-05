#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 *@width: width of the array.
 *@height: height of the array.
 *
 * Return: NUll or pointer to the array.
 */

int **alloc_grid(int width, int height)
{
	int i,j;

	if (width <= 0 || height <= 0)
		return (NULL);
	int **mat = (int **)malloc(width * sizeof(int));
	if (mat == 0)
		return (NULL);
	for(i = 0; i < hight; i++)
		mat[i] = (int *)malloc(height * sizeof(int));

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; i++)
			mat[i][j] = 0;
	}
	return (mat);

}
