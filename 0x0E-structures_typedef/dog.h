#ifndef DOG_H
#define DOG_H

/**
 * struct dog - f
 * @name: l
 * @age: k
 * @owner: f
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
