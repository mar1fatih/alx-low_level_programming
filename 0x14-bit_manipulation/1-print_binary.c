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
/**
 * print_binary - check the code
 * @n: n
*/
void print_binary(unsigned long int n)
{
	int len = 30;
	int i, c;
	unsigned int sqr;

	c = len;
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	sqr = twosquarl(len);
	for (i = 0; i < c; i++)
	{
		if (n >= sqr)
		{
			for (i = 0; i <= len; i++)
			{
				if (n >= sqr)
				{
					_putchar('1');
					n = n - sqr;
					sqr = sqr / 2;
				}
				else
				{
					_putchar('0');
					sqr = sqr / 2;
				}
			}
			return;
		}
		len--;
		sqr = sqr / 2;
	}
	_putchar ('0');
}
