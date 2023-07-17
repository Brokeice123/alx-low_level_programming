#include "dog.h"
#include <stdlib.h>

/**
 *new_dog - Pointer to the struct dog_t
 *@name: Pointer to the name of the dog
 *@age: The age of the dog
 *@owner: Pointer to the name of the owner of the dog
 *Return: A Pointer to the struct dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
