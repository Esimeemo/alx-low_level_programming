#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name
 * @argc: number of things you entered when running this programme in the command line
 * @argv[]: array that holds the value of the things that were entered
 *
 * return: 0
 */

int main(int argc, char* argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return 0;
}
