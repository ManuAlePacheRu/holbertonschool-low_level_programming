#include <stdio.h>

/**
* main - Entry point
*
*
* Return: Always 0 (Success)
*/

int main(void)

{

	int l;

	for (l = 0; l < 10; l++)

	{
		putchar('0' + l);

	}

	for (l = 0; l < 6; l++)

	{

		putchar('a' + l);

	}

	putchar('\n');

	return (0);

}
