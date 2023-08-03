#include "main.h"
/**
 * flip_bits - check the code
 * @n: n
 * @m: m
 * Return: int
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int i;
int c;

i = n ^ m;
while (i != 0)
{
if ((i & 1ul) != 0)
{
c++;
}
i = i >> 1;
}
return (c);
}
