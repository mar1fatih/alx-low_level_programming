#include "variadic_functions.h"
/**
 * print_numbers - check the code
 * @separator: k
 * @n: k
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
int i = 0, j = n;
va_list nptr;

if (n > 0)
{
va_start(nptr, n);
do {
printf("%d", va_arg(nptr, int));
i++;
j--;
if (i != (int) n && separator != NULL)
{
printf("%s", separator);
}
} while (j != 0);
printf("\n");
va_end(nptr);
}
else
{
printf("\n");
return;
}
}
