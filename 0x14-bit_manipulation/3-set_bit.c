#include "main.h"
/**
 * set_bit - check code
 * @n: n
 * @index: index
 * Return: int
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int g, i;

g = sizeof(n) * 8;
if (index >= g)
{
return (-1);
}
i = *n |= 1l << index;

return (!!(i));
}
