#include "main.h"

/**
 * print_alphabet - prints the alphabet 
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int a;

	for (a = 0; 'a' <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}
