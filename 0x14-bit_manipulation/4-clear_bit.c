#include "main.h"
/**
 * clear_bit - check the code
 * @n: n
 * @index: index
 * Return: int
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int g;

g = sizeof(n) * 8;
if (index >= g)
{
return (-1);
}
if ((*n & 1l << index) != 0)
{
*n = *n ^ 1l << index;
}
return (1);
}
