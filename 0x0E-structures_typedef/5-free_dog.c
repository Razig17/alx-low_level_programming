#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free a struct dog from memory
 *
 * @d: Dog structure
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
