#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - counts string chars
 * @s: variable to validate
 * Return: value
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

/**
 * _strcpy - reverse a string
 * @dest: string destination
 * @src: string source
 * Return: void
 **/
char *_strcpy(char *dest, char *src)
{
	char *i = dest;

	for (; *src != '\0'; i++, src++)
	{
		*i = *src;
	}

	*i = '\0';

	return (i);
}

/**
 * new_dog - reverse a string
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new2;

	new2 = malloc(sizeof(dog_t));

	if (new2 == NULL)
		return (NULL);

	if (name == NULL)
		new2->name = NULL;
	else
	{
		new2->name = malloc(_strlen(name) + 1);
		if (new2->name == NULL)
		{
			free(new2);
			return (NULL);
		}
		_strcpy(new2->name, name);
	}
	if (owner == NULL)
		new2->owner = NULL;
	else
	{
		new2->owner = malloc(_strlen(owner) + 1);
		if (new2->owner == NULL)
		{
			free(new2->name);
			free(new2);
			return (NULL);
		}
		_strcpy(new2->owner, owner);
	}
	new2->age = age;
	return (new2);
}
