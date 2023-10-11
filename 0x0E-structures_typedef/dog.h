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


typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
