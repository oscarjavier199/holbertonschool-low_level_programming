#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* one-line header goes there */

/**
** main - generates a random number  and assigns
** it to the variable n
**
** Return: n and evaluates against logical operators
**/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}