#include "main.h"

/**
 *print_array - prnt an array of char
 *@*a: is a pointer to an array
 *@n: is the number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] < n; i++)
		printf("%d, ", a[i]);
}
