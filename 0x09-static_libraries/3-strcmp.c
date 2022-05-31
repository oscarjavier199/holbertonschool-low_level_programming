#include "main.h"

/**
 ** _strcmp - function that compares two strings
 ** @s2: is a second world
 ** @s1: is a first world
 ** Return: 0
 **/

int _strcmp(char *s1, char *s2)
{
int c;
for (; (*s1 != '\0') && (*s1 == *s2); s1++, s2++)
{
}
c = *s1 - *s2;
if (c == 0)
return (0);
else if (c > 0)
return (c);
else if (c < 0)
return (c);
return (c);
}