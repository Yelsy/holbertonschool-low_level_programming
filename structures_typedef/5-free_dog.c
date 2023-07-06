#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - dog free
 * @d: dog
 */
void free_dog(dog_t *d)
{
	if (d == 0)
	{
		return;
	}
	else if (d->name)
	{
		free(d->name);
	}
	else if (d->owner)
	{
		free(d->owner);
	}
	free(d);
}
