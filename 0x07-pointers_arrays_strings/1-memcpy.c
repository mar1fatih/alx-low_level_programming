#include "main.h"
/**
 * _memcpy - a
 * @dest: b
 * @src: c
 * @n: d
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
