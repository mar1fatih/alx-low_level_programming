#include "function_pointers.h"
/**
 * array_iterator - l
 * @array: k
 * @size: j
 * @action: k
 * Return: l
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
{
int i;
if (array && size && action)
{
for (i = 0; i < size ; i++)
{
action(array[i]);
}
}
}
}
