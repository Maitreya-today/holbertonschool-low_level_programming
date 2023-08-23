#include "main.h"
#include <string.h>

/**
 * _strlen - funtion prototype
 *
 * @s: to get the length of the string
 *
 * Return: the lenght of @s.
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
