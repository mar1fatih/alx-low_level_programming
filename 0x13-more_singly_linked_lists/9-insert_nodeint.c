#include "lists.h"
/**
 * insert_nodeint_at_index - check code
 * @head: head
 * @idx: idx
 * @n: n
 * Return: pointer
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *temp;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	current = *head;
	idx--;
	while (idx--)
	{
		if (current->next == NULL)
		{
			return (NULL);
		}
		current = current->next;
	}
	temp = current;
	current = current->next;
	temp->next = new;
	new->n = n;
	new->next = current;
	return (current);
}
