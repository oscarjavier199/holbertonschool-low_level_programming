#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 ** _calloc -  allocates memory for an array
 ** @nmemb: This is the length to allocate in the memory
 ** @size: This is the size to save
 ** Return: Pointer to the allocated memory.
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int a, b;
char *call;

if (nmemb == 0 || size == 0)
return (NULL);
b = (nmemb * size);
call = malloc(b);
if (call == NULL)
return (NULL);
for (a = 0; a < b; a++)
{
call[a] = 0;
}
return (call);
}
