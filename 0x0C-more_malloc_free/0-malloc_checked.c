#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>


/**
 ** malloc_checked - unsigned int b
 ** @b: lenght no allocate in memory
 ** Return: pointer to allocated memory if malloc fails.
 **/

void *malloc_checked(unsigned int b)
{
int *pointer;
pointer = malloc(b);
if (pointer == NULL)
exit(98);
return (pointer);
}
