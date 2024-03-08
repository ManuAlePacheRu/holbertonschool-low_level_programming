#include "main.h"

/**
 *print_array - prnt an array of char
 *@*a: is a pointer to an array
 *@n: is the number of elements to be printed
 *@a: is the pointer used in the program
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n)
		{
			printf(", ");
		}
	}
}
