#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 ** _strdup - returns a pointer to a new string which
 ** is a duplicate of the string str
 ** @str: string
 ** Return: pointer or char array.
 **/
char *_strdup(char *str)
{
char *strdup;
int i = 0;

if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
;
strdup = malloc(sizeof(*strdup) * (i + 1));

if (strdup == NULL)
return (NULL);
while (i >= 0)
{
strdup[i] = str[i];
i--;
}
return (strdup);
}
