#include "main.h"

/**
 * main - put the argc and argv arguments
 * @argc: represent the number of command line arguments
 * @argv: list the command line arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int numc, numc2, digis, ressum;

	for (numc = 0; numc < argc; numc++)
	{
		for (numc2 = 1; argv[numc][numc2]; numc2++)
		{
			digis = isdigit(argv[numc][numc2]);
			if (digis == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[numc]);
	}
	printf("%d\n" ,ressum);
	return (0);
}
