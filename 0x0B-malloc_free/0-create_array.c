#include "main.h"
#include <stdlib.h>
/**
 * create_array - s
 * @size: d
 * @c: d
 * Return: char
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;

ptr = malloc(size);
if (size == 0 || ptr == 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
