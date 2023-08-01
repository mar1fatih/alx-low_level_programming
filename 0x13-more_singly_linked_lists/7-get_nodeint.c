#include "lists.h"
/**
 * get_nodeint_at_index - check the code
 * @head: head
 * @index: index
 * Return: pointer
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;

	current = head;
	while (index--)
	{
		if (current->next == NULL)
		{
			return (NULL);
		}
		current = current->next;

	}
	return (current);
}
