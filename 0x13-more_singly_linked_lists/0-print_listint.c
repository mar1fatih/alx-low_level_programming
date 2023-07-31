#include "lists.h"
/**
 * print_listint - check code
 * @h: head
 * Return: size_t
*/
size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}