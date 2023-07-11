#include "main.h"
#include <stdlib.h>
/**
 * strlength - f
 * @s: j
 * Return: l
*/
int strlength(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{}
return (i);
}

/**
 * str_concat - f
 * @s1: k
 * @s2: l
 * Return: char
*/
char *str_concat(char *s1, char *s2)
{
char *ptr;
int i = 0, j1, j2;

if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";
j1 = strlength(s1);
j2 = strlength(s2);
ptr = malloc((j1 + j2) *sizeof(*ptr) + 1);
if (ptr == 0)
return (0);
for (i = 0; i <= j1 + j2; i++)
{
if (i < j1)
ptr[i] = s1[i];
else
ptr[i] = s2[i - j1];
}
ptr[i] = '\0';
return (ptr);
}
