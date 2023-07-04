#include "main.h"
/**
 * print_diagsums - a
 * @a: d
 * @size: f
*/
void print_diagsums(int *a, int size)
{
int i = 0, c = 0, j;

for (j = 0; j < size; j++)
{
i += a[j];
c += a[size - j - 1];
a += size;
}

printf("%d", i);
printf(", ");
printf("%d\n", c);
}
