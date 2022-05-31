#include "main.h"

/* one-line description */

/**
** _abs - computes the value of an integer.
** @n: the integrer to compute is absolute value
** Return: 0 (Success) 1 (Fail)
**/

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
