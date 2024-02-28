#include "main.h"

/**
 * main - put the argc and argv arguments
 * @argc: represent the number of command line arguments
 * @argv: list the command line arguments
 * Return: 0
 */

int main(int argc, char **argv)

{
	(void)argc; /**This line suppresses the warning*/

	printf("%s\n", argv[0]);

	return (0);
}
