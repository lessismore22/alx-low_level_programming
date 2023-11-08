#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
* new_dog - this is a function that creates a new dog
* @name: the name of the dog
* @age: the dog's age
* @owner: the owner
* Return: a pointer or NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int n = 0, o = 0, c;
	dog_t *new_dog;

	while (name[n] != '\0')
		n++;
	while (owner[o] != '\0')
		o++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(n * sizeof(new_dog->name));
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (c = 0; c <= n; c++)
		new_dog->name[c] = name[c];
	new_dog->age = age;
	new_dog->owner = malloc(o * sizeof(new_dog->owner));
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (c = 0; c <= n; c++)
		new_dog->owner[c] = owner[c];
	return (new_dog);
}
