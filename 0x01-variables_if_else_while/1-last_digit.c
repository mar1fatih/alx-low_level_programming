#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: a program showing the last digit of a variable
 * Return: Always 0 (success)
*/
int main(void)
{
	int n, ls;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ls = n % 10;
	if (ls < 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, ls);
	}
	else if (ls == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, ls);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ls);
	}
	return (0);
}
