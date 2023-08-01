#include "lists.h"
/**
 * delete_nodeint_at_index - check the code
 * @head: head
 * @index: index
 * Return: 1 if success and -1 if fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *temp;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}
	current = *head;
	if (index == 0)
	{
		temp = current;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	else
	{
		index--;
		while (index--)
		{
			if (current->next == NULL)
			{
				return (-1);
			}
			current = current->next;

		}
		temp = current;
		temp = temp->next;
		current->next = current->next->next;
		free(temp);
		return (1);
	}
}
