#include "main.h"
#define USE "Usage: cp file_from file_to\n"
#define ERR_NR "Error: Can't read from file NAME_OF_THE_FILE %s\n"
#define ERR_NW "Error: Can't write to NAME_OF_THE_FILE %s\n"
#define ERR_NC "Error: Can't close fd FD_VALUE %d\n"
#define PERMI (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - check the code
 * @argc: argc
 * @argv: argv
 * Return: 1
*/
int main(int argc, char *argv[])
{
ssize_t a;
int from = 0, to = 0;
char buf[buff];

if (argc != 3)
	dprintf(STDERR_FILENO, USE), exit(97);
from = open(argv[1], O_RDONLY);
if (from == -1)
	dprintf(STDERR_FILENO, ERR_NR, argv[1]), exit(98);
to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMI);
if (to == -1)
	dprintf(STDERR_FILENO, ERR_NW, argv[2]), exit(99);
while ((a = read(from, buf, buff)) > 0)
{
if (write(to, buf, a) != a)
	dprintf(STDERR_FILENO, ERR_NW, argv[2]), exit(99);
}
if (a == -1)
	dprintf(STDERR_FILENO, ERR_NR, argv[1]), exit(98);
from = close(from);
to = close(to);
if (from)
	dprintf(STDERR_FILENO, ERR_NC, from), exit(100);
if (to)
	dprintf(STDERR_FILENO, ERR_NC, from), exit(100);
return (EXIT_SUCCESS);
}
