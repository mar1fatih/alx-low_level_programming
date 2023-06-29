#include "main.h"
/**
 * reverse_array - a
 * @a: n
 * @n: g
*/
void reverse_array(int *a, int n)
{
int x, y, c;

for (x = 0, y = (n - 1); x < y; x++, y--)
{
c = a[x];
a[x] = a [y];
a[y] = c;
}
}
