#include "main.h"

/**
 ** _puts - prints a string to stdout
 ** @str: pointer to the string to print
 **/

void _puts(char *str)
{
	int o;

	for (o = 0; str[o] != '\0'; o++)
	{
		_putchar(str[o]);
	}
	_putchar('\n');
}
