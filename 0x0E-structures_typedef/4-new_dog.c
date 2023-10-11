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
 * Return: poiner to new dog structure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_n;
	int name_len = 0, owner_len = 0;

	if (name != NULL && owner != NULL)
	{
		name_len = _strlen(name) + 1;
		own_len = _strlen(owner) + 1;
		max_dog = malloc(sizeof(dog_t));

		if (dog_n == NULL)
			return (NULL);
		dog_n->name = malloc(sizeof(char) * name_l);

		if (dog_n->name == NULL)
		{
			free(dog_n);
			return (NULL);
		}
		dog_n->owner = malloc(sizeof(char) * own_l);

		if (dog_n->owner == NULL)
		{
			free(dog_n->name);
			free(dog_n);
			return (NULL);
		}
		dog_n->name = _strcpy(dog_n->name, name);
		dog_n->owner = _strcpy(dot_n->owner, owner);
		dog_n->age = age;
	}
	return (dog_n);
}
