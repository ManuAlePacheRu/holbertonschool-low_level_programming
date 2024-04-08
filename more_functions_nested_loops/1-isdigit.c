#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 *@c: is a variable where numbers are stored
 *Return: 1 if is a digit and 0 if is something else
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	return (0);
}
