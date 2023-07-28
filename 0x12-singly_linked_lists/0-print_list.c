#include "lists.h"
/**
 * len - length of string
 * @str: l
 * Return: int
 */
int len(char *str)
{
int i = 0;
if (str == NULL)
{
return (0);
}
while (*str++)
{
i++;
}
return (i);
}

/**
 * print_list - k
 * @h: k
 * Return: struct
*/
size_t print_list(const list_t *h)
{
size_t j = 0;
while (h != NULL)
{
printf("[%d] %s\n", len(h->str), h->str ? h->str : "(nil)");
h = h->next;
j++;
}
return (j);
}
