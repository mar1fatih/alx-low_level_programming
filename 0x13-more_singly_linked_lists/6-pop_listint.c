#include "lists.h"
/**
 * pop_listint - check code
 * @head: head
 * Return: n
*/
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n = 0;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	current = *head;
	*head = (*head)->next;
	free(current);
	return (n);
}
