#include "holberton.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: s2
 * @src: s1
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int one;
	int two;

	for (one = 0 ; dest[one] ; one++)
		;

		for (two = 0 ; src[two] ; two++)
		{
			dest[one] = src[two];
			one++;
		}
		return (dest);

}
