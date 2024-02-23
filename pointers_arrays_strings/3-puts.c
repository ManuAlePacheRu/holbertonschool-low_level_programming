#include "main.h"

/**
 * _puts - put a character string
 *
 * @str: is the pointer for the character string
 */

void _puts(char *str)

{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

		_putchar('\n');
}
