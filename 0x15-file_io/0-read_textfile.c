#include "main.h"
/**
 * read_textfile - check the code
 * @filename: filname
 * @letters: letters
 * Return: ssize_t
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int ptr;
ssize_t i;
char arr[buff * 8];

if (filename == NULL || !letters)
{
return (0);
}
ptr = open(filename, O_RDONLY);
if (ptr == -1)
{
return (0);
}
i = read(ptr, &arr[0], letters);
i = write(STDOUT_FILENO, &arr[0], i);
close(ptr);
return (0);
}
