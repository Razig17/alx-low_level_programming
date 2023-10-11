#include "dog.h"
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: Dog structure
 * @name: Dog's name
 * @age: The age
 * @owner: Dog's owner
 *
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
