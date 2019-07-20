#include "holberton.h"
#include "stdio.h"
#include "stdlib.h"

/**
 *
 *
 *
 *
 */
int **alloc_grid(int width, int height)
{
	int **g, k, p;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	g = malloc(sizeof(int **) * height);

	if (g == NULL)
	{
		free(g);
		return (NULL);
	}
	for (k = 0 ; k < height ; k++)
	{
		g[k] = (int *)malloc(width * sizeof(int));
		if (g[k] == NULL)
		{
			for (; g >= 0;)
			{
				free(g[k]);
				k--;
			}
			free(g);
			return (NULL);
		}
	}
	for (k = 0 ; k < height ; k++)
	{
		for (p = 0 ; p < width ; p++)
		{
			g[k][p] = 0;
		}
	}
	return (g);
}
