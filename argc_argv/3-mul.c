#include "main.h"

/**
 * main - put the argc and argv arguments
 * @argc: represent the number of command line arguments
 * @argv: list the command line arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int num1, num2, res;

	if (argc == 3)
	{
		num1 = argv[1];
		num2 = argv[2];
		res = num1 * num2;
		printf("%d\n", res);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
