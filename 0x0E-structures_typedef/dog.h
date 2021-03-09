#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - Struct to define a dog
 * @name: name of dog
 * @owner: owner's name
 * @age: years old
 *
 * Description: Structure dog.
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);


#endif
