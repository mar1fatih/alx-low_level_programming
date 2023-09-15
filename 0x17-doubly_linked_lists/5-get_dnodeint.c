#include "lists.h"
/**
 * get_dnodeint_at_index - check the code
 * @head: head
 * @index: index
 * Return: dlistint_t
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int i;
	dlistint_t *current;

	current = head;
	i = 0;
	while (current)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
