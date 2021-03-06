#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - frees variable blocks struct to define a dog
 * @d: Struct variable
 *
 * Description: Structure var init
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
