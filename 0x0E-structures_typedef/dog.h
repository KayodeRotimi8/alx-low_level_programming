#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - a dog structure
 *
 * @name: pointer to character storing name of dog
 * @age: float representing age of dog
 * @owner: pointer to character storing name of dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
