#include <stdlib.h>
#include <stdio.h>

/**
** main - entry point
**
** Return: void
**
**/

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
	if (i % 3 == 0 && i % 5 == 0)
	{
		printf("FizzBuzz");
	}
	if (i % 3 == 0 && i % 5 != 0)
	{
		printf("Fizz");
	}
	if (i % 3 != 0 && i % 5 == 0)
	{
		printf("Buzz");
	}
	if (i % 3 != 0 && i % 5 != 0)
	{
		printf("%d", i);
	}
	if (i != 100)
	{
		printf(" ");
	}
}
printf("\n");
return (0);
}
