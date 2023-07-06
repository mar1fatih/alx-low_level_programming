#include "main.h"
/**
 * _print_rev_recursion - a
 * @s: d
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_putchar(s + 1);
}
}
