#include "main.h"

/**
 *print_to_98 - print all numbers from n to 98
 *
 *@n: is the variable who store the starting number
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = 0; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (n = 0; n > 98; n--)
		{
			printf("%d", n);
		}
	}
printf("98\n");
}
