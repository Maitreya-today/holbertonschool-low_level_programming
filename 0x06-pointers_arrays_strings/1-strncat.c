#include "holberton.h"
/**
 * *_strncat - concatenate two strings but do
 * not include null.
 *
 * @dest: s1
 * @src: s2
 * @n: number of bytes
 *
 * Return: 0;
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b;

	while (dest[a] != '\0')
		++a;
	for (b = 0; b < n && src[b] != '\0'; b++)
		dest[a + b] = '\0';
	return (dest);
}
