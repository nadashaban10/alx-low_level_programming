#include <stdio.h>
#include "dog.h"

/**
 *free_dog - frees dog values
 *@d: pointer
 */
void free_dog(dog_t *d)
{
	if (d) 
	{
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
		freee(d)
	}
}
