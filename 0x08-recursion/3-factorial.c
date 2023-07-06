#include "main.h"
/**
 * factorial - d
 * @n: h
 * Return: int
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
