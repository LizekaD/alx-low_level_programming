#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - that initialize a variable of type struct dog
 * @d: pointer
 * @name: the name
 * @age:  the age
 * @owner: the owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
