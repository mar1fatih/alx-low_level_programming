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
if (size == 0)
{
return (NULL);
}
char *ptr = malloc(size);
for (int i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
