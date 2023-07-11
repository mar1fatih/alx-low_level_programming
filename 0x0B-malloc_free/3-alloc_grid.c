#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - d
 * @width: l
 * @height: e
 * Return: int
*/
int **alloc_grid(int width, int height)
{
int i, j;
int **ptr;

ptr = malloc(sizeof(*ptr) * height);
if (width <= 0 || height <= 0 || ptr == 0)
{
return (NULL);
}
else
{
for (j = 0; j < height; j++)
{
ptr[j] = malloc(sizeof(**ptr) * width);
if (ptr[j] == 0)
{
while (j--)
{
free(ptr[j]);
}
free(ptr);
return (NULL);
}
for (i = 0; i < width; i++)
{
ptr[j][i] = 0;
}
}
}
return (ptr);
}
