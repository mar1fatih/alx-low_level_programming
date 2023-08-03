#include "main.h"
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
