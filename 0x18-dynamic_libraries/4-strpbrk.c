#include "main.h"
/**
 * _strpbrk - a
 * @s: f
 * @accept: v
 * Return: s + i or '\0'
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
return (s + i);
}
}
}
return ('\0');
}
