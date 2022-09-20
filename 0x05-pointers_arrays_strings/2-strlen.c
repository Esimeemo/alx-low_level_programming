#include "main.h"

/**
 * _strlen - a function that returns the lenght of a string
 * @s: the input string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length)  != '\0')
		       	length++;

	return (length);
}
