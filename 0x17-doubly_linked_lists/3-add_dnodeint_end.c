#include "lists.h"
/**
 * add_dnodeint_end - check the code
 * @head: head
 * @n: data
 * Return: dlistint_t
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
{
	dlistint_t *newnode, *current;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
	}
	else
	{
		current = *head;
		while (current->next)
		{
			current = current->next;
		}
		current->next = newnode;
		newnode->prev = current;
	}
	return (newnode);
}
