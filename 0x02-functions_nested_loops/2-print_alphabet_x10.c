#include "main.h"
/**
 * print_alphabet_x10 - using _putchar to print a to z 10 times
 *
*/
void print_alphabet_x10(void)
{
	int line, i;

	for (line = 1; line <= 10; line++)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
	}
}
