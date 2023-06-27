#include "main.h"
/**
 * _puts - a
 * @str: b
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str + 0);
	str++;
	}
	_putchar('\n');
}
