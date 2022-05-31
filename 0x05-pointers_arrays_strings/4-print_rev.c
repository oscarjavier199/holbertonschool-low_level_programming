#include "main.h"

/**
 ** print_rev - prints a string in reverse, followed by a new line
 ** @s: string to be printed
 **/

void print_rev(char *s)
{
	int o, j, mov;

	o = 0;

	while (s[o] != '\0')
	{
		o++;
	}

	mov = o;

	for (j = mov - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
