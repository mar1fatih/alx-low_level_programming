#include "lists.h"
/**
 * print_listint - check code
 * @h: head
 * Return: size_t
*/
size_t print_listint(const listint_t *h)
{
	int c, i;

	c = 0;
	while (h)
	{
		i = h->n;
		printf("%d\n", i);
		c++;
		h = h->next;
	}
	return (c);
}
