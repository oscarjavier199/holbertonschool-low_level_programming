#include "main.h"

/* one-line description */

/**
** print_last_digit - prints the last digit of n..
** @n: The number to print its last digit.
** Return: 0 (Success) 1 (Fail)
**/

int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
{
n = n * -1;
}
_putchar(n + '0');
return (n);
}
