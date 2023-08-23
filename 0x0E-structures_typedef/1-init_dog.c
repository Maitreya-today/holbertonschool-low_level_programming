#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - funtion prototype
 * @name:dog name
 * @age: age
 * @owner: owner name
 * @d: name of the struct
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
