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
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	{
	if (a == 'e' || a == 'q')
	{
	a++;
	}
	else
	{
	putchar(a);
	a++;
	}
	}
	putchar('\n');
	return (0);
}
