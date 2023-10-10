#include "dog.h"
#include <stdio.h>
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: is the dog
 * @name: is the name
 * @age: is the age
 * @owner: is the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
