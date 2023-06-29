#include "main.h"
/**
 * _strcmp - a
 * @s1: b
 * @s2: n
 * Return: int
*/
int _strcmp(char *s1, char *s2)
{
int c;

while (*s1)
{
if (*s1 != *s2)
{
c = ((int)*s1 - 48) - ((int)*s2 - 48);
break;
}
s1++;
s2++;
}
return (c);
}
