#include "lists.h"
/**
 * dlistint_len - check code
 * @h: head
 * Return: size_t
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *current;

	current = h;
	while(current)
	{
		i++;
		current = current->next;
	}
	return (i);
}
