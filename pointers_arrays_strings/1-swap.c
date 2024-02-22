#include "main.h"

/**
 * swap_int - swap the value of two integers
 *
 * @a: is a pointer
 * @b: is a pointer
 *
 * int temp: is for save a value temporaliy
 */

	void swap_int(int *a, int *b)

	{

		int temp = *a;
		*a = *b;
		*b = temp;

	}
