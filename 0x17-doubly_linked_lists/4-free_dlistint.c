#include "lists.h"
/**
 * free_dlistint - check the code
 * @head: head
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *current;

	current = head;
	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
