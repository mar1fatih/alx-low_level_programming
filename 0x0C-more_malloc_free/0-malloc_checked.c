#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - f
 * @b: g
 * Return: pointer
*/
void *malloc_checked(unsigned int b)
{
int *p;

p = malloc(b);
if (p == 0)
{
exit(98);
}
return (p);
}
