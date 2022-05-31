#include "main.h"

/**
 ** _isalpha - checks for alphabetic character
 ** @c: is a character
 ** Return: 0
 **/

int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
return (1);
else
return (0);
}