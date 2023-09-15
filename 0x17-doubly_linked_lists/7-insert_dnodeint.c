#include "lists.h"
/**
 * insert_dnodeint_at_index - check the code
 * @h: head
 * @idx: index
 * @n: new data
 * Return: new list
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *current;

	current = *h;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (idx != 1)
	{
		current = current->next;
		if (current == NULL)
		{
			return (NULL);
		}
		idx--;
	}
	if (current->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->prev = current;
	newnode->next = current->next;
	current->next->prev = newnode;
	current->next = newnode;
	return (newnode);
}
