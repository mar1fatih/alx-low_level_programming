#include <stdio.h>
/**
 * main - a
 * @argc: d
 * @argv: f
 * Return: always 0
*/
int main(int argc, char const **argv)
{
int i;

for (i = 0; argc >= 0; i++, argc--)
{
printf("%s\n", argv[i]);
}
return (0);
}
