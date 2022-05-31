#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 **_realloc - reallocates a memory block using malloc and free
 ** @ptr: pointer to the memory previsouly allocated by malloc
 ** @old_size: size of the allocated memory for ptr
 ** @new_size: new size of the new memory block
 ** Return: pointer to the newly allocated memory block
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *ptr1;
char *ptr2Old;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}

if (!ptr)
return (malloc(new_size));

ptr1 = malloc(new_size);
if (!ptr1)
return (NULL);

ptr2Old = ptr;

if (new_size < old_size)
{
for (i = 0; i < new_size; i++)
ptr1[i] = ptr2Old[i];
}

if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
ptr1[i] = ptr2Old[i];
}

free(ptr);
return (ptr1);
}
