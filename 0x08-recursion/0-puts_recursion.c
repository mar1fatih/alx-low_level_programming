#include "main.h"
/**
 * _puts_recursion - a
 * @s: n
*/
void _puts_recursion(char *s)
{
_putchar(*s);
if (*s == '\0')
{
return;
}
_puts_recursion(++s);
}
