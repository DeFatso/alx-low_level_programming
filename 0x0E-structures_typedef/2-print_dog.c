#include <stdio.h>
#include "dog.h"
/**
 *print_dog - function prints struct
 *
 *@d: parameter
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("(nil)\n");
	}
	else if ((*d).name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
}
