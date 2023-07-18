#include "dog.h"
/**
 * init_dog - f
 * @d: k
 * @name: k
 * @age: k
 * @owner: l
 * Return: k
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
