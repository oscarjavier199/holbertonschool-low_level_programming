#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 ** array_range - function that creates an array of integers.
 ** @min: This is the range min to allocate in the memory
 ** @max: This is my range max to allocate in the memory
 ** Return: The pointer to the created array
 */

int *array_range(int min, int max)
{
int a, b;
int *arrayRange;

if (min > max)
return (NULL);
b = min;
arrayRange = (int *) malloc(sizeof(int) * (max - min + 1));
if (arrayRange == NULL)
return (NULL);
for (a = 0; a <= (max - min); a++)
{
arrayRange[a] = b;
b++;
}
return (arrayRange);
}
