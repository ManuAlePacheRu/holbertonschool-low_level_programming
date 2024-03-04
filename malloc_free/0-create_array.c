#include "main.h"

/**
 * *create_array - create an array
 * @size: is the size of the array
 * @c: is the character that is going to be putted in every space of the array
 * Return: arr
 */

char *create_array(unsigned int size, char c)
{
	int num;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (num = 0; num <= (int)size; num++)
	{
		arr[num] = c;
	}
	return (arr);
}
