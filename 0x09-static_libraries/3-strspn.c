#include "main.h"

/**
 ** _strspn -  that gets the length of a prefix substring
 ** @s: initial segment of
 ** @accept: which consist only of bytes from
 ** Return: 0
 **/

unsigned int _strspn(char *s, char *accept)
{
int i = 0, h = 0, count = 0;
while (*(s + i))
{
while (*(accept + h))
{
if (*(accept + h) == *(s + i))
count++;
h++;
}
h = 0;
i++;
if (*(s + i) == ' ')
break;
}
return (count);
}