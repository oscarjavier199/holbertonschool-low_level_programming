#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 ** alloc_grid - grid of integers
 ** @width: columns
 ** @height: rows
 ** Return: returns a pointer to a 2 dimensional array of integers.
 **/

int **alloc_grid(int width, int height)
{
int **alloc;
int i, x, y;
if (width <= 0 || height <= 0)
return (NULL);
alloc = (int **) malloc(height * sizeof(int *));
if (alloc == NULL)
{
free(alloc);
return (0);
}
for (i = 0; i < height; i++)
{
alloc[i] = (int *) malloc(width * sizeof(int));
if (alloc[i] == NULL)
{
for (; i >= 0; i--)
free(alloc[i]);
free(alloc);
return (0);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
{
alloc[x][y] = 0;
}
}
return (alloc);
}
