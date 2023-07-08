#include "main.h"
/**
 * _strlen - a
 * @s: b
 * Return: c
*/
int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
	{
	++c;
	}
	return (c);
}
