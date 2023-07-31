#include "lists.h"
/**
 * free_listint - check code
 * @head: head
*/
void free_listint(listint_t *head)
{
listint_t *current;
listint_t *ptr;

current = head;
while (current)
{
	ptr = current;
	current = current->next;
	free(ptr);
}
}
