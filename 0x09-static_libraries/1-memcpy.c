#include "main.h"

/**
 ** *_memcpy - copies memory area.
 ** @dest: memory area destination
 ** @src: area src to memory
 ** @n: bytes from memory
 ** Return: 0
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int cj;
for (cj = 0; cj < n; cj++)
dest[cj] = src[cj];
return (dest);
}