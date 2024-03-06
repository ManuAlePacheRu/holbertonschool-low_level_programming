#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int alph;
	int alphx10;

	for (alphx10 = 0; alphx10 <= 9; alphx10++)
	{

		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}

		_putchar('\n');
	}
}
