#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);


/**
 *_strlen -findes the length of a string
 *
 *@s: the string
 *
 *Return: returens the length of the string
*/


int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		len += 1;
	return (len);
}

/**
 * new_dog-  creates new dog structure
 *
 * @name: Dog's name
 * @age: The age
 * @owner: Dog's owner
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name && owner)
	{
		dog = malloc(_strlen(name) + 1);
		if (dog == NULL)
		{
			free(dog);
			return (NULL);
		}
		dog->owner = malloc(_strlen(owner) + 1);
		if ( max_dog->owner == NULL)
		{
			free(dog->owner);
			free(dog);
			return ( NULL);
		}
		dog->name = *name;
		dog->owner = *owner;
		dog->age = age;

	}
	return (dog);
}
