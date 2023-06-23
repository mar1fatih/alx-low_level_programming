#include "main.h"
/**
 * main - Entry point
 *
 * Description: a program print _putchar with a new line
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char str[] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
	{
	_putchar(str[x]);
	}
	_putchar('\n');
	return (0);
}
