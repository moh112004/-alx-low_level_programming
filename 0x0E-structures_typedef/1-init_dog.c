#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct
 * @d: The details of the dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog name
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
