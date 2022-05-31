#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 ** main - adds positive numbers
 ** @argc: number of arguments
 ** @argv: array of arguments
 ** Return: (0)
 **/

int main(int argc, char *argv[])

{
int i = 0, j = 0, sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum = sum + atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
