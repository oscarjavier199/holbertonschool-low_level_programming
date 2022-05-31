#include "main.h"

/**
 ** _abs - computes the absolute value of an integer.
 ** @n: is a number
 ** Return: 0
 **/

int _abs(int n)
{
if (n < 0)
{
n = n * (-1);
return (n);
}
else
return (n);
}