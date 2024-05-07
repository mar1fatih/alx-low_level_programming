#include "search_algos.h"
/**
 * binary_search - searches for a value in an array using the Binary search
 * @array: sorted array
 * @size: size of the array
 * @value: value to be found in the array
 * Return: the index of the value if not found -1
*/
int binary_search(int *array, size_t size, int value)
{
	int m;
	size_t l = 0;
	size_t r = size - 1;
	size_t i;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		i = l;
		m = (r + l) / 2;
		printf("Searching in array: ");
		while (i <= r)
		{
			if (i != l)
				printf(", ");
			printf("%d", array[i]);
			i++;
		}
		printf("\n");
		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}
	return (-1);
}
