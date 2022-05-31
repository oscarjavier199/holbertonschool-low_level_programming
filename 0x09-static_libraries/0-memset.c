#include "main.h"

/**
 ** *_memset - fills memory with a constant byte
 ** @s: a pointer to the memory area
 ** @b: the constant byte
 ** @n: bytes of the memory area pointed
 ** Return: 0
 **/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int cj;
for (cj = 0; cj < n; cj++)
s[cj] = b;
return (s);
}