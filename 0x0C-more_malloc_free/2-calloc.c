#include "main.h"
/**
 * _zero - l
 * @str: l
 * @a: k
 * @n: l
 * Return: char
*/
char *_zero(char *str, char a, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
str[i] = a;
}
return (str);
}
/**
 * _calloc - l
 * @nmemb: j
 * @size: j
 * Return: p
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;

if (size == 0 || nmemb == 0)
{
return (NULL);
}
p = malloc(size * nmemb);
if (p == NULL)
{
return (NULL);
}
_zero(p, 0, size * nmemb);
return (p);
}
