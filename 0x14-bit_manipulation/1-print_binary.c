#include "main.h"
/**
 * print_binary - check the code
 * @n: n
 * Return: void
*/
void print_binary(unsigned long int n)
{
int p = 0, len = sizeof(n) * 8;

while (len != 0)
{
if (n & 1l << --len)
{
_putchar('1');
p = p + 1;
}
else if (p != 0)
{
_putchar('0');
}
}
if (p == 0)
{
_putchar('0');
}
}
