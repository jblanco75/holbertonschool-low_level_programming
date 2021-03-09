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

	/*if (d->age == NULL)
	  printf("Age: (nil)\n");*/
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)");
	if (d == NULL)
	{
		printf(" \n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
