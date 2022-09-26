#include "main.h"

/**
 * *_memset - files memory with a constant byte
 * @s: pointing to the memory address
 * @n: number of bytes to be filled
 * @b: value to be filled
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + 1) = b;
		i++;
	}
	return (s);
}
