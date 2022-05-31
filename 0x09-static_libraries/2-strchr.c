#include "main.h"

/**
 ** *_strchr - that locates a character in a string.
 ** @s: in the string
 ** @c: the first occurrence of the character
 ** Return: 0
 **/

char *_strchr(char *s, char c)
{
if (!s)
return ("error\n");
while (*s)
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
return ('\0');
}