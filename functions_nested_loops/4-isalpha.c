#include "main.h"

/**
 *_isalpha - checks if the char is uppercase or lowercase
 *Return: 1 if is lowercase or upercase else return 0
 *@c: is where the values are stored
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
