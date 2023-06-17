#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: a program print numbers from 0 - 9
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
	putchar(num + '0');
	num++;
	}
	putchar('\n');
	return (0);
}
