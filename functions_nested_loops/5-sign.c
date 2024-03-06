#include "main.h"

/**
 *print_sign - this function print the sign of a number
 *@n: represent the given number
 *Return: 1 if is +, -1 if is -, 0 if is 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}

	else if (n < 0)
	{
		printf("-");
		return (-1);
	}
	else if (0 == 0)
	{
		printf("0");
		return (0);
	}
}
