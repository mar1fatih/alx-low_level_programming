#include "lists.h"
/**
 * sum_listint - check the code
 * @head: head
 * Return: sum
*/
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	current = head;
	while (current)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
