#include <stdio.h>
#include "dog.h"

/**
 *init_dog -Entry point
 *@d: value of structure
 *@name: name of the dog
 *@age: age of this
 *@owner: who is the master
 *Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
