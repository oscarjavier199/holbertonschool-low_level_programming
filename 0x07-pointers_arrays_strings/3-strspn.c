#include "main.h"

/**
 ** _strspn - gets lenght of prefix substring
 **
 ** @accept: bytes to compare
 ** @s: string to check (initial segment of s)
 **
 ** Return: Returns the number of bytes in the
 ** initial segment of s which consist only of bytes from accept
 **
 **/

unsigned int _strspn(char *s, char *accept)
{
unsigned int o, j;
for (o = 0; s[o]; o++)
{
for (j = 0; accept[j]; j++)
{
if (s[o] == accept[j])
break;
}
if (!accept[j])
break;
}
return (o);
}
