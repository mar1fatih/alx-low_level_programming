#include "main.h"
/**
 * slen - length of string
 * @str: l
 * Return: int
*/
int slen(char *str)
{
int i = 0;

if (str == NULL)
{
return (0);
}
while (*str++)
{
i++;
}
return (i);
}

/**
 * create_file - check the code
 * @filename: filename
 * @text_content: text_content
 * Return: int
*/
int create_file(const char *filename, char *text_content)
{
ssize_t i = 0, l;
int ptr;

l = slen(text_content);
if (filename == NULL)
{
return (-1);
}
ptr = open(filename, O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR);
if (ptr == -1)
{
return (-1);
}
if (l > 0)
{
i = write(ptr, text_content, l);
}
close(ptr);
if (i == l)
{
return (1);
}
else
{
return (-1);
}
}
