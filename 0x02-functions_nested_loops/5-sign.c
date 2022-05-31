#include "main.h"

/* one-line description */

/**
** print_sign - checks sign of a number
** @n: is a number
** Return: 0 (Success) 1 (Fail)
**/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}

