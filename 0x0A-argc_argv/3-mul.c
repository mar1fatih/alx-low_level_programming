#include <stdio.h>
#include <stdlib.h>
/**
 * main - a
 * @argc: f
 * @argv: k
 * Return: 0 if success and 1 if failed
*/
int main(int argc, char **argv)
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
