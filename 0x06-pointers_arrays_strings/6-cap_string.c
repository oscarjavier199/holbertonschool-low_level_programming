#include "main.h"
/**
 ** cap_string - capitalizes all words of a string
 ** @s: input value
 **
 ** Return: string
 **/
char *cap_string(char *s)
{
int j;
for (j = 0; s[j] != '\0'; j++)
{
if (j == 0 && s[j] >= 'a' && s[j] <= 'z')
{
s[j] -= 32;
}
if ((s[j] == ' ' || s[j] == ',' || s[j] == ';' ||
s[j] == '.' || s[j] == '!' || s[j] == '?' ||
s[j] == '"' || s[j] == '(' || s[j] == ')' ||
s[j] == '{' || s[j] == '}' || s[j] == '\n' ||
s[j] == '\t') &&
(s[j + 1] >= 'a' && s[j + 1] <= 'z'))
{
s[j + 1] -= 32;
}
}
return (s);
}
