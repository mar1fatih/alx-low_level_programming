#include "lists.h"
/**
 * listint_len - check code
 * @h: head
 * Return: size_t
*/
size_t listint_len(const listint_t *h)
{
	size_t c;

	c = 0;
	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
