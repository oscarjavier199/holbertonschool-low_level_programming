#include "main.h"

/**
 ** *_strncat - function that concatenates two strings.
 ** @dest: is the destination
 ** @src: is the string to concatenate
 ** @n:number of characters to concatenate
 ** Return: 0
 **/

char *_strncat(char *dest, char *src, int n)
{
int fr, sc;
for (fr = 0; dest[fr] != '\0'; fr++)
{
}
for (sc = 0; sc < n && src[sc]; sc++, fr++)
dest[fr] = src[sc];
dest[fr] = '\0';
return (dest);
}