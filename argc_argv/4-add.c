#include "main.h"
#include <ctype.h>
/**
 * main - put the argc and argv arguments
 * @argc: represent the number of command line arguments
 * @argv: list the command line arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int numc, digis;
	int sum = 0;

	for (numc = 1; numc < argc; numc++)
	{
		for (digis = 0; argv[numc][digis]; digis++)
		{
			digis = isdigit(argv[numc][digis]);
			if (digis == 0)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[numc]);
	}
	printf("%d\n", sum);
	return (0);
}
