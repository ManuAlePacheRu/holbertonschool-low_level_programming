#include "main.h"

/**
 *_strlen - take the length of a string
 *@s: take the string
 *Return: i
 *
 */

int _strlen(char *s)

{

	int i = 0;


	while (s[i] != '\0')
	{

		i++;

	}

	return (i);
}
/**
 * puts2 - Saltea caracteres
 *
 * @str: is where the string is
 *
 * Return: return nothing
 */

void puts2(char *str)
{

	int i = 0;
	int len = _strlen(str);

	for (i = 0; ; i = i + 2)
	{
		if (len % 2 == 0) /* ESTO PASA SI ES PAR */
		{
			if (str[i] == '\0')
				break;
		}
		else if (i != 0) /* SI ES IMPAR ENTRA ACA */
		{
			if (str[i - 1] == '\0')
				break;
		}

		_putchar(str[i]);
	}
	_putchar('\n');
}
