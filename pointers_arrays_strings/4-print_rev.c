#include "main.h"

/**
 * print_rev - Print characters in reverse
 *
 * @s: is a variable
 *
 */

void print_rev(char *s)

{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (s[i] >= 0)

	{
		_putchar(s[i]);
		i--;
	}

_putchar('\n');

}
