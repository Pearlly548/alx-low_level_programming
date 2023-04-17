#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - an input that Returns a pointer to a 2-dimensional array of int
 * @width: The array width
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 * Otherwise returns to the array
 */

int **alloc_grid(int width, int height)
{
	int **tda;
	int e, f;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	tda = (int **)malloc(sizeof(int *) * height);
	if (tda == NULL)
	{
		return (NULL);
	}
	for (e = 0; e < height; e++)
	{
		tda[e] = malloc(sizeof(int) * width);
		if (tda[e] == NULL)
		{
			for (e = 0; e < height; e++)
			{
				free(tda[e]);
			}
			free(tda);
			return (NULL);
		}
		for (f = 0; f < width; f++)
		{
			tda[e][f] = 0;
		}
	}
	return (tda);
}
