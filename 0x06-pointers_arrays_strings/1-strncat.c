#include "holberton.h"
/**
 * @_strncat - function that concatenates two strings
 * @dest: s1
 * @src: s2
 * @n: number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n)
	{
		dest[a + b] = src[b];
		b++;
		if (src[b] == '\0')
		{
			b = n;
		}
	}
	return (dest);
}
