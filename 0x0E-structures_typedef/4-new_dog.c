#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *new_dog - creating new dog
 *@name : parameter
 *@age : parameter
 *@owner : parameter
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = (dog_t *) malloc(sizeof(dog_t));
	char *name_copy = (char *) malloc(strlen(name) + 1);
	char *owner_copy = (char *) malloc(strlen(owner) + 1);

	if (new_dog == NULL)
	{
		return (NULL);
	}

	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
