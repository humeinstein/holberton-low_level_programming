#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize struct to variables
 * @d: d
 * @name: name
 * @age: age
 * @owner: owner
 * Return: void
 */
void init_dog(struct dog(*d), char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
