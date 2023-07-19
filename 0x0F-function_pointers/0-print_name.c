#include "function_pointers.h"
/**
 * print_name - k
 * @name: j
 * @f: k
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
