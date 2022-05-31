#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 ** str_concat - concatenates two strings
 ** @s1: first string
 ** @s2: second string
 ** Return: should point to a newly allocated space in memory
 ** which contains the contents of s1, followed by the contents of s2
 ** and null terminated
 **/

char *str_concat(char *s1, char *s2)
{
char *pointer;
int i;
int len1, len2;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
pointer = malloc((sizeof(char) * (len1 + len2)) +1);
if (pointer == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
pointer[i] = s1[i];
for (i = 0; s2[i] != '\0'; i++)
pointer[len1 + i] = s2[i];
pointer[len1 + i] = '\0';
return (pointer);
}
