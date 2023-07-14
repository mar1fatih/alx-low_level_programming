#include "main.h"
#include <stdlib.h>
/**
 * _realloc - simulating realloc function
 * @old_size: h
 * @new_size: h
 * @ptr: h
 * Return: pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
unsigned int i;

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
else if (ptr == NULL)
{
p = malloc(new_size);
if (p == NULL)
	return (NULL);
return (p);
}
else if (new_size == old_size)
{
return (ptr);
}
else if (new_size > old_size)
{
p = malloc(new_size);
if (p == NULL)
return (NULL);
for (i = 0; i < old_size; i++)
{
*((char *)p + i) = *((char *)ptr + i);
}
free(ptr);
}
return (p);
}
