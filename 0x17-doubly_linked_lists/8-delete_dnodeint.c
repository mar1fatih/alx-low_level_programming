#include "lists.h"
/**
 * delete_dnodeint_at_index - check the code
 * @head: head
 * @index: index
 * Return: int
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;

	current = *head;
	if (!current)
		return (-1);
	while (index != 0)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
		index--;
	}
	if (current == *head)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{
		current->prev->next = current->next;
		if (current->next != NULL)
		{
			current->next->prev = current->prev;
		}
	}
	free(current);
	return (1);
}
