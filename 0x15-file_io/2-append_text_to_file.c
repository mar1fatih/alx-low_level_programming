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
 * append_text_to_file - chech the code
 * @filename: filename
 * @text_content: text_content
 * Return: int
*/
int append_text_to_file(const char *filename, char *text_content)
{
ssize_t i = 0, l;
int ptr;

l = slen(text_content);
if (filename == NULL)
{
return (-1);
}
ptr = open(filename, O_WRONLY, O_APPEND);
if (ptr == -1)
{
return (-1);
}
if (l != 0)
{
i = write(ptr, text_content, l);
}
close(ptr);
return (i == l ? 1 : -1);
}
