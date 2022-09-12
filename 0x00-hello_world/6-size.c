#include <stdio.h>

/**
 * main entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	long int li;
	long long int lli;
	char c;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
