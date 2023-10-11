#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a structure
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: contains dog's name age and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
