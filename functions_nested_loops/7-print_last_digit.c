#include "main.h"

/**
 *print_last_digit - prints the last digit of a number}
 *@num: is the number that the last digit is going to be extracted
 *Return: the value of the last digit
 */

int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}

	_putchar('0' + last_digit);
	return (last_digit);
}
