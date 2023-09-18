#include "main.h"
/**
 * _strstr - a
 * @haystack: f
 * @needle: g
 * Return: pointer or null
*/
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j, c;

for (i = 0; haystack[i] != '\0'; i++)
{
c = i;
j = 0;
while (haystack[i] == needle[j] && needle[j] != '\0')
{
i++;
j++;
}
if (needle[j] == '\0')
{
return (haystack + c);
}
else
{
i = c;
}
}
return ('\0');
}
