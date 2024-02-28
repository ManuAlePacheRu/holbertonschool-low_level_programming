#include <stdio.h>
/**
 * main - put the argc and argv arguments
 * @argc: represent the number of command line arguments
 * @argv: list the command line arguments
 * Return: 0
 */
int main(int argc, char **argv)

{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
