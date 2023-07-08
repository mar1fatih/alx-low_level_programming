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

while (argc--)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
