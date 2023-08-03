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
 * _strlen - check the code
 * @str: str
 * Return: int
*/
int _strlen(const char *str)
{
	int c = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		c++;
	}
	return (c);
}
/**
 * binary_to_uint - check the code
 * @b: b
 * Return: int
*/
unsigned int binary_to_uint(const char *b)
{
	int c = 0, len, i;

	if (b == NULL)
	{
		return (0);
	}

	len = _strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[len - i - 1] == '1')
		{
			c = twosquarl(i) + c;
		}
		else if (b[len - i - 1] == '0')
		{}
		else
		{
			return (0);
		}
	}
	return (c);
}
