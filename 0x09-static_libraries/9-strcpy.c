#include "main.h"

/**
 ** _strcpy - opies the string pointed to by src
 ** @dest: destination where the string will be copied
 ** @src: source from where the string will be copied
 ** Return: 0
 **/

char *_strcpy(char *dest, char *src)
{
int i;
char *ch = dest;
for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
dest[i] = '\0';
return (ch);
}