#include "main.h"

/**
 ** *_strcat - function that concatenates two strings.
 ** @dest:  is the destination
 ** @src: is the string to concatenate
 ** Return: 0
 **/

char *_strcat(char *dest, char *src)
{
int fr, sc;
for (fr = 0; dest[fr] != '\0'; fr++)
{
}
for (sc = 0; src[sc] != '\0'; sc++, fr++)
dest[fr] = src[sc];
dest[fr] = '\0';
return (dest);
}