#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

/**
 ** string_nconcat - concatenates two strings
 ** @s1: string 1
 ** @s2: string 2
 ** @n: copies first string to second string.
 ** Return: If the function fails, it should return NULL.
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int a, b;
char *newString;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (a = 0; s1[a] != '\0'; a++)
{
}
for (b = 0; s2[b] != '\0'; b++)
{
}
if (n > b)
n = b;
newString = malloc(((a + n) +1));
if (newString == NULL)
return (NULL);
for (a = 0; s1[a] != '\0'; a++)
{
newString[a] = s1[a];
}
for (b = 0; b != n; b++)
{
newString[a] = s2[b];
a++;
}
newString[a] = '\0';
return (newString);
}
