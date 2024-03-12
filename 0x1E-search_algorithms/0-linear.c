#include "search_algos.h"
/**
 * linear_search - serching using linear search
 * @array: array
 * @size: array size
 * @value: the value to be looking for
 * Return: the value index
*/
int linear_search(int *array, size_t size, int value)
{
	int idx = 0;

	if (array == NULL)
		return (-1);
	while (size--)
	{
		printf("Value checked array[%d] = [%d]\n", idx, *array);
		if (*array == value)
			return (idx);
		idx++;
		array++;
	}
	return (-1);
}
