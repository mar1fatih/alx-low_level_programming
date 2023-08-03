#include "main.h"
/**
 * twosquarl - check the code
 * @a: a
 * Return: int
*/
unsigned int twosquarl(int a)
{
	unsigned int i = 1, j = 2;

	while (a > 0)
	{
		i = i * j;
		a--;
	}
	return (i);
}
