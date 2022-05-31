#include "main.h"

/* one-line description */

/**
** _isalpha -  checks for alphabetic characters
** @c: is a character
** Return: 0 (Success) 1 (Fail)
**/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

