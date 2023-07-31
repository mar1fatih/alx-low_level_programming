#include "lists.h"
/**
 * free_listint2 - check the code
 * @head: head
*/
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *ptr;

	current = *head;
	while (current)
	{
		ptr = current;
		current = current->next;
		free(ptr);
	}
	*head = NULL;
}
