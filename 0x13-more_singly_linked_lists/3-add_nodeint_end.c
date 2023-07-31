#include "lists.h"
/**
 * add_nodeint_end - check code
 * @head: head
 * @n: n
 * Return: pointer
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else if ((*head)->next == NULL)
	{
		(*head)->next = new;
	}
	else
	{
		current = *head;
		while (current->next)
		{
			current = current->next;
		}
		current->next = new;
	}
	return (new);
}
