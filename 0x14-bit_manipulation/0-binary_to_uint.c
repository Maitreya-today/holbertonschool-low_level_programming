#include "main.h"

/**
 * binary_to_uint - function
 * @b: var
 * Return: num
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int x = 0, y = 1;
int l;

if (b == NULL)
{
	return (0);
}

for (l = 0; b[l];)
{
	l++;

}
for (l -= 1; l >= 0; l--)
{

	if (b[l] != '0' && b[l] != '1')
	{
		return (0);
	}

	x += (b[l] - '0') * y;
	y *= 2;

}
return (x);
}
