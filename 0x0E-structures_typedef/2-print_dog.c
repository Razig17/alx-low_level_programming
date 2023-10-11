#include "dog.h"
/**
 * print_dog - prints a struct dog
 *
 * @d: Dog structure
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		if (d->age)
			printf("Age: %f\n", d->age);
		if (d->owner)
			printf("Owner: %s\n", d->owner);
	}
}
