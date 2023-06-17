#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: a program that print the alphabet with putchar function
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	printf("%c", c);
	c++;
	}
	printf("\n");
	return (0);
}
