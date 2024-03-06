#include "main.h"

/**
 *times_table - prints the 9 table
 *
 */

void times_table(void)
{
	int rows, col, product;

	for (rows = 0; rows <= 9; rows++)
	{
		_putchar('0');

		for (col = 1; col <= 9; col++)
		{
			_putchar(',');
			_putchar(' ');

			product	= rows * col;

			if (product < 10)
			_putchar(' ');
					else
					{
						_putchar((product / 10) + '0');
						_putchar((product % 10) + '0');
					}
		}
	_putchar('\n');
	}
}
