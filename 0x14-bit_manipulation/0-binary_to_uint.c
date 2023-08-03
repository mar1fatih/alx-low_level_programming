#include "main.h"
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
