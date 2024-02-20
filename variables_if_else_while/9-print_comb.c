#include <stdio.h>

int main(void)
{
	int l;

	for (l = 0; l <= 9; l++)
	{
		putchar(l + '0');
	
	if (l < 9)
	{
		putchar(',');
		putchar(' ');

	}

	}
	putchar('\n');

	return 0;
}
