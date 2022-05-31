#include "main.h"

/**
 ** _strpbrk -  locates the first occurrence
 ** in the string s of any of the bytes in the string accept.
 **
 ** @accept: bytes to compare from.
 ** @s: string to check.
 **
 ** Return: Returns a pointer to the byte in s
 ** that matches one of the bytes in accept, or NULL if no such byte is found.
 **/

char *_strpbrk(char *s, char *accept)

{
int o;
while (*s)
{
for (o = 0; accept[o]; o++)
{
if (*s == accept[o])
return (s);
}
s++;
}
return (0);
}
