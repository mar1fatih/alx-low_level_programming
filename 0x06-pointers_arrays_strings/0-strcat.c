#include "main.h"
/**
 * _strcat - a
 * @dest: b
 * @src: c
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
int d, s;

d = 0;
while (dest[d])
{
d++;
}
for (s = 0; src[s]; s++)
{
dest[d++] = src[s];
}
return (dest);
}
