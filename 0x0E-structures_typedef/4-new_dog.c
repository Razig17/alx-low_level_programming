#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

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
  * _strcpy - Copy a string
  * @dest: Destination string
  * @src: Source string
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
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
		if (dog->owner == NULL)
		{
			free(dog->owner);
			free(dog);
			return (NULL);
		}
		dog->name = _strcpy(dog->name, name);
		dog->owner = _strcpy(dog->owner, owner);
		dog->age = age;

	}
	return (dog);
}
