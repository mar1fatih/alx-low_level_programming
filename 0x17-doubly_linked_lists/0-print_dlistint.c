#include "lists.h"
/**
 * print_dlistint - check code
 * @h: head
 * Return: size_t
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;
	const dlistint_t *current;

	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		x++;
		current = current->next;
	}
	return (x);
}
