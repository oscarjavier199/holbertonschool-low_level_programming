#include "main.h"

/**
 ** *_strstr - function that locates a substring.
 ** @haystack: the string
 ** @needle: the first occurrence of the substring
 ** Return: 0
 **/

char *_strstr(char *haystack, char *needle)
{
unsigned int i = 0, j = 0;
while (*(haystack + i))
{
{
while (*(needle + j))
{
if (*(needle + j) != *(haystack + i + j))
break;
j++;
}
}
if (*(needle + j) == '\0')
return (haystack + i);
i++;
}
return (NULL);
}