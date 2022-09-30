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

	int i;

	for (i = 0; i < argc; i++)
	{
	printf("Number of arguments are: %d\n", argc);
	}
	return (0);
}
