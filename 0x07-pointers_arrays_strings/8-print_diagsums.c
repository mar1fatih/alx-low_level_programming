#include "main.h"
/**
 * print_diagsums - a
 * @a: d
 * @size: f
*/
void print_diagsums(int *a, int size)
{
int i = 0, c = 0, j = 0;
int (*ptr)[size];

ptr = (int (*)[size])a;

for (j = 0; j < size; j++)
{
i += ptr[j][j];
c += ptr[j][size - j - 1];
}

printf("%d", i);
printf(", ");
printf("%d\n", c);
}
