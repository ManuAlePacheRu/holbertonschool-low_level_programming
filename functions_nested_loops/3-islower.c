#include "main.h"

/**
 *_islower - check if a character is lowercase
 * Return: 1 if is lowercase and 0 if is uppercase
 *@c: is where the given char is store
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
