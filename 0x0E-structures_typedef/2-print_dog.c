#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - Prints struct to define a dog
 * @d: struct variable
 *
 * Return: Structure dog.
 */
void print_dog(struct dog *d)
{

	if (d->age == 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", d->owner);
	if (d == NULL)
	{
		printf(" \n");
	}
}
