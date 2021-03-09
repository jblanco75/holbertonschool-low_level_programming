#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initializes variable type struct to define a dog
 * @d: Struct variable
 * @name: name of dog
 * @owner: owner's name
 * @age: years old
 *
 * Description: Structure var init
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
