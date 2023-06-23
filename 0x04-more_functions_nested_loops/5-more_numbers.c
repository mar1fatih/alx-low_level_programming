#include "main.h"
/**
 * more_numbers - a
*/
void more_numbers(void)
{
int i, j, x;
for (j = 1; j <= 10; j++)
{
for (i = 0; i <= 14; i++)
{
x = i;
if (i > 9)
{
_putchar(49);
x = i % 10;
}
_putchar(x + 48);
}
_putchar('\n');
}
}
