#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * init_dog - function
 *@d: parameter
 *@name: parameter
 *@age: parameter
 *@owner: parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}
