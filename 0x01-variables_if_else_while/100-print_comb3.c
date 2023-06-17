#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: a program print alphabet without e and q
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int f, s;

	for (f = 0; f <= 9; f++)
	{
	for (s = f + 1; s <= 9; s++)
	{
	putchar(f + '0');
	putchar(s + '0');
	if (f != 8 || s != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
