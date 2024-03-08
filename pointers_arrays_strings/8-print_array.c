#include "main.h"

/**
 *print_array - prnt an array of char
 *@*a: is a pointer to an array
 *@n: is the number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;
	n=n;
	for (i = 0; a[i] != '\0' || n; i++)
		printf("%d, ", a[i]);
}
