#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * _strcpy - copies the string
 * @dest: Destiny
 * @src: source
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dogs;

	new_dogs = malloc(sizeof(dog_t));
	if (new_dogs == NULL)
		return (NULL);

	(*new_dogs).name = malloc(sizeof(name) + 1);
	if ((*new_dogs).name == NULL)
	{
		free(new_dogs);
		return (NULL);
	}

	(*new_dogs).owner = malloc(sizeof(owner) + 1);
	if ((*new_dogs).owner == NULL)
	{
		free((*new_dogs).name);
		free(new_dogs);
		return (NULL);
	}

	_strcpy((*new_dogs).name, name);
	(*new_dogs).age = age;
	_strcpy((*new_dogs).owner, owner);

	return (new_dogs);
}
