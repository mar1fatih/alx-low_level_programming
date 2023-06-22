#include "main.h"
/**
 * times_table - print the multiplication table with 9 lines
*/
void times_table(void)
{
	int num, multi, x;

	for (num = 0; num <= 9; num++)
	{
	_putchar(48);
	for (multi = 1; multi <= 9; multi++)
	{
	_putchar(',');
	_putchar(' ');
	x = num * multi;
	if (x < 10)
	{
	_putchar(' ');
	_putchar(x + 48);
	}
	else
	{
	_putchar((x / 10) + 48);
	_putchar((x % 10) + 48);
	}
	}
	_putchar('\n');
	}
}
