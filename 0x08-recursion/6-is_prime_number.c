#include "main.h"

/**
 ** find_prime - determines if the int is a prime number
 ** @x: input
 ** @n: test n
 ** Return: return 1 if it is a prime number otherwise return 0
 **/

int find_prime(int n, int x)
{
if (x == n)
{
return (1);
}
else if (n % x == 0)
{
return (0);
}
return (find_prime(n, x + 1));
}

/**
 ** is_prime_number- calculates if num is prime
 ** @n: input
 ** Return: 1 prime, 0 otherwise
 **/

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (find_prime(n, 2));
}
