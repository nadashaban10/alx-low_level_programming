#include <stdio.h>
#include "dog.h"
/**
 *init_dog - function that initialize a variable of type
 *@d: pointer
 *@name: name's dog
 *@age: age's dog
 *@owner: owner's dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
