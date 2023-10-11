#include "dog.h"
#include <stdio.h>
/**
 * free_dog - free a struct dog from memory
 *
 * @d: Dog structure
 */

void free_dog(dog_t dog *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
