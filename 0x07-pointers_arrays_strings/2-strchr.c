#include "main.h"
/**
 * _strchr - a
 * @s: b
 * @c: c
 * Return: pointer or '\0'
*/
char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] != '\0')
{
if (s[i] == c)
{
return (s + i);
}
i++;
}
return ('\0');
}
