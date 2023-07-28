#include "lists.h"
/**
 * free_list - k
 * @head: k
*/
void free_list(list_t *head)
{
list_t *ptr, *link;
if (head == NULL)
	return;
ptr = head;
while (ptr != NULL)
{
link = ptr->next;
free(ptr->str);
free(ptr);
ptr = link;
}
}
