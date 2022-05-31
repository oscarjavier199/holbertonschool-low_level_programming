#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 ** main - moltiplication
 ** @argc: number of arguments = result
 ** @argv: array of arguments * argv
 ** Return: (1)
 **/

int main(int argc, char *argv[])
{
int result;
if (argc == 3)
{
result  = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
