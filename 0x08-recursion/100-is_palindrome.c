#include "main.h"

/**
 ** _strlen_recursion - gives the lenght of a string
 ** @s: string
 ** Return: lenght of a string
 **/

int _strlen_recursion(char *s)
{

if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}

/**
 ** _comparation - comparates the first l/2 characters
 ** @s: string
 ** @o: lenght of the string s
 ** Return: the number of coincidences
 **/

int _comparation(char *s, int o)
{
if (*s == *(s + (o - 1)) && *s != '\0')
{
o--;
return (_comparation((s + 1), o - 1));
}
return (o);
}

/**
 ** is_palindrome - determinates if a string is a plaindrome
 ** @s: string
 ** Return: return 1 if s is a palindrome and 0 otherwise
 **/

int is_palindrome(char *s)
{
int o = _strlen_recursion(s);

int n = _comparation(s, o);

if (n == -o)
return (1);
else
return (0);
}
