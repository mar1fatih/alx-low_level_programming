#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: a program print from 012 to 789
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int f, s, t;

	for (f = 0; f <= 9; f++)
	{
	for (s = f + 1; s <= 9; s++)
	{
	for (t = s + 1; t <= 9; t++)
	{
	putchar(f + '0');
	putchar(s + '0');
	putchar(t + '0');
	if (f != 7 || s != 8 || t != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
