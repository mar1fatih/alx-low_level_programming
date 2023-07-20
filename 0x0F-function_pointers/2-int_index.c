#include "function_pointers.h"
/**
 * int_index - l
 * @array: k
 * @size: k
 * @cmp: k
 * Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0 && array == NULL && cmp == NULL)
{
return (-1);
}
for (i = 0; i < (int) size; i++)
{
if (cmp(*(array + i)) != 0)
{
return (i);
}
}
return (-1);
}
