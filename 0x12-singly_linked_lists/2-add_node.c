#include "lists.h"
/**
 * _strdup - doing the same as strdup
 * @str: k
 * Return: char*
*/
char *_strdup(const char *str)
{
char *dup;
int len = 0, i;

if (str == NULL)
{
return (NULL);
}

while (str[len] != '\0')
{
len++;
}

dup = malloc((len + 1) * sizeof(char));

if (dup != NULL)
{
for (i = 0; i <= len; i++)
{
dup[i] = str[i];
}
}
return (dup);
}

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
 * add_node - l
 * @head: k
 * @str: l
 * Return: struct
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *ptr = malloc(sizeof(list_t));
if (head == NULL || ptr == NULL)
{
return (NULL);
}
if (str != NULL)
{
ptr->str = _strdup(str);
if (ptr->str == NULL)
{
free(ptr);
return (NULL);
}
ptr->len = len(ptr->str);
}
ptr->next = *head;
*head = ptr;
return (ptr);
}
