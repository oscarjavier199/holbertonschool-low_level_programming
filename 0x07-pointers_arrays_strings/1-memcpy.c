#include "main.h"

/**
 ** _memcpy - function copies n bytes from
 ** memory area src to memory area dest
 **
 ** @src: string to copy from
 ** @dest: string to copy into
 ** @n: number of bytes to change
 **
 ** Return: destination
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
