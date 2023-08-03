#include "main.h"
/**
 * get_bit - check the code
 * @n: n
 * @index: index
 * Return: n
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int i, g;

g = sizeof(n) * 8;
if (index >= g)
{
return (-1);
}
i = n >> index & 1;
return (i);
}
