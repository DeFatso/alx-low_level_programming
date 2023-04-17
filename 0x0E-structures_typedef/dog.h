#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Poppy
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

#ifndef MAIN_H
#define MAIN_H

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
