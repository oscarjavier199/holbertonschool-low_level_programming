#include "main.h"

/**
 ** *_strpbrk - searches a string for any of a set of bytes.
 ** @accept: that matches one of the bytes
 ** @s: a pointer to the byte
 ** Return: 0
 **/

char *_strpbrk(char *s, char *accept)
{
int y = 0, h = 0;
while (*(s + y))
{
while (*(accept + h))
{
if (*(accept + h) == *(s + y))
return (s + y);
h++;
}
h = 0;
y++;
}
return (NULL);
}