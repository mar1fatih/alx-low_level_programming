#include "main.h"
#include <stdlib.h>
/**
 * _strdup - f
 * @str: f
 * Return: char
*/
char *_strdup(char *str)
{
char *ptr;
int i, j;

if (str == NULL)
{
return (NULL);
}
for (j = 0; str[j] != '\0'; j++)
{}
ptr = malloc(j);
if (ptr == NULL || str == NULL)
{
return (NULL);
}
while (i <= j)
{
ptr[i] = str[i];
i++;
}
return (ptr);
}
