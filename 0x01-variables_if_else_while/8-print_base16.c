#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: a program print alphabet revesed
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int num = 48;

	while (num <= 102)
	{
	putchar(num);
	if (num == 57)
	{
	num = num + 39;
	}
	num++;
	}
	putchar('\n');
	return (0);
}
