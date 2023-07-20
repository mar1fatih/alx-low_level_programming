#include "variadic_functions.h"
/**
 * sum_them_all - l
 * @n: l
 * Return: int
*/
int sum_them_all(const unsigned int n, ...)
{
int i, x;
va_list nptr;

if (n == 0)
	return (0);
va_start(nptr, n);
for (i = 0; i < (int) n; i++)
	x += va_arg(nptr, int);
return (x);
}
