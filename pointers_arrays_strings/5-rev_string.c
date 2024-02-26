#include "main.h"

/**
 * rev_string - reverse a string
 * @s: is a pointer
 */

void rev_string(char *s)

{
	int i = 0, l;
	char c;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;

	for (l = 0; l <= i / 2; l++)

	{
		c = s[l];
		s[l] = s[i - l];
		s[i - l] = c;
	}
}
