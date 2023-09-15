#include "lists.h"
/**
 * sum_dlistint - check the code
 * @head: head
 * Return: int
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
