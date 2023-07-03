#include "main.h"
/**
 * _memset - a
 * @s: array
 * @b: parameter
 * @n: parameter
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
	if (i % 10)
	{
	printf(" ");
	}
	if (!(i % 10) && i)
	{
	printf("\n");
	}

	s[i] = b;
	i++;
	}
	printf("\n");
	return (s);
}
