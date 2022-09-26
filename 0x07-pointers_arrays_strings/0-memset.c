#include <stdio.h>
#include <string.h>
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
	memset(*s, b, n * sizeof(char));
	return (s);
}
