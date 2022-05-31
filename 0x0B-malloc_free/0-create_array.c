#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 ** create_array - creates an array of chars,
 ** and initializes it with a specific char
 ** @c: character
 ** @size: size of an array
 ** Return: pointer to array or null
 **/

char *create_array(unsigned int size, char c)
{
char *arrayofcharacters;
unsigned int i;

if (size == 0)
return (NULL);

i = 0;
arrayofcharacters = malloc(sizeof(char) * size);
if (arrayofcharacters == NULL)
return (NULL);
while (i < size)
{
arrayofcharacters[i] = c;
i++;
}
return (arrayofcharacters);
}
