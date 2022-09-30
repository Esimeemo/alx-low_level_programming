#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints number of arguments within the function
 * @argc: prints number of arguments
 * @argv: prints values of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%ii\n", argc - 1);

	return (0);
}
