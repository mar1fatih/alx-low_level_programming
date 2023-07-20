#include "variadic_functions.h"
/**
 * print_strings - l
 * @separator: l
 * @n: i
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
int i = 0, j = n;
va_list nptr;

if (n > 0)
{
va_start(nptr, n);
do {
printf("%s", va_arg(nptr, char*));
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
