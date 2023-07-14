#include "main.h"
/**
 * array_range - o
 * @min: f
 * @max: k
 * Return: int
*/
int *array_range(int min, int max)
{
int l, i, *p;

if (min > max)
	return (NULL);
l = max - min + 1;
p = malloc(sizeof(int) * l);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < l; i++)
{
p[i] = min;
min++;
}
return (p);
}
