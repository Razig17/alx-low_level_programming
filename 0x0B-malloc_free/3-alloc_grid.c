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
	int i, j, k, l;
	int **mat;

	if (width <= 0 || height <= 0)
		return (NULL);
	mat = malloc(height * sizeof(int));
	if (mat == NULL)
	{
		return (NULL);
		free(mat);
	}

	for (i = 0; i < height; i++)
	{
		mat[i] = malloc(width * sizeof(int));
		if (mat[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(mat[j]);
			}

			free(mat);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
			mat[k][l] = 0;
	}
	return (mat);

}
