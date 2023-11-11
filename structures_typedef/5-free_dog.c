#include "dog.h"

/**
 * free_dog- Function to free previous struc member created
 *
 * @d: new struct member with data created
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
