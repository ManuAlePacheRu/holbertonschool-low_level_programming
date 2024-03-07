#include "main.h"

/**
 *puts_half - print the half of a string
 *@str: is a pointer to a string
 */

void puts_half(char *str)
{
	int a = 0;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	a = (len + 1) / 2;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}

	_putchar('\n');
}
